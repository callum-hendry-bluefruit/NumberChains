#include "NumberChains.h"

void NumberChain::TakeAndParseInput(int input_int)
{
	BreakDownInt(input_int);
}

int NumberChain::GetValueInPreviousNumbers(int vector_element)
{
	return m_previous_numbers[vector_element];
}

void NumberChain::ArrangeDecending()
{
	std::sort(m_sorted_numbers.begin(), m_sorted_numbers.end());
	std::reverse(m_sorted_numbers.begin(), m_sorted_numbers.end());
}

void NumberChain::ArrangeAscending()
{
	std::sort(m_sorted_numbers.begin(), m_sorted_numbers.end());
}

int NumberChain::MergeVectorElements()
{
	int merged_numbers = 0;
	for (size_t i = 0; i < m_sorted_numbers.size(); i++)
	{
		if (i == 0)
		{
			merged_numbers = m_sorted_numbers[i];
		}
		else
		{
			merged_numbers *= 10;
			merged_numbers += m_sorted_numbers[i];
		}
	}

	return merged_numbers;
}

void NumberChain::SubtractAscendingFromDecending()
{
	std::vector<int> sorted_decending;
	std::vector<int> sorted_ascending;
	
	ArrangeDecending();
	sorted_decending = m_sorted_numbers;
	int decending_merged = MergeVectorElements();

	ArrangeAscending();
	sorted_ascending = m_sorted_numbers;
	int ascending_merged = MergeVectorElements();
	
	m_after_subtraction = decending_merged - ascending_merged;
}

void NumberChain::BreakDownInt(int int_to_break)
{
	int digit;
	m_sorted_numbers.clear();

	while (int_to_break > 0)
	{
		digit = int_to_break % 10;
		int_to_break = int_to_break / 10;
		m_sorted_numbers.push_back(digit);
	}
}

void NumberChain::MultipleSubtractions(int input_int)
{
	TakeAndParseInput(input_int);

	SubtractAscendingFromDecending();
	m_previous_numbers.push_back(m_after_subtraction);
	BreakDownInt(m_after_subtraction);

	bool stop_subtraction = false;

	while (stop_subtraction == false)
	{
		SubtractAscendingFromDecending();

		for (size_t i = 0; i < m_previous_numbers.size(); i++)
		{
			if (m_after_subtraction == m_previous_numbers[i])
			{
				stop_subtraction = true;
				break;
			}
		}

		if (stop_subtraction != true)
		{
			m_previous_numbers.push_back(m_after_subtraction);
		}
		BreakDownInt(m_after_subtraction);
	}
	PrintOutNumbers();
}

void NumberChain::PrintOutNumbers()
{
	for (size_t i = 0; i < m_previous_numbers.size(); i++)
	{
		std::cout << m_previous_numbers[i] << "\n";
	}
}