#include "NumberChains.h"

void NumberChain::TakeAndParseInput()
{

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

void NumberChain::SubtractAscendingFromDecending()
{
	std::vector<int> sorted_decending;
	std::vector<int> sorted_ascending;
	
	ArrangeDecending();
	sorted_decending = m_sorted_numbers;

	ArrangeAscending();
	sorted_ascending = m_sorted_numbers;

	
	
}

int NumberChain::MergeVectorElements()
{
	int merged_numbers = 0;
	for (int i = 0; i <= 8; i++)
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