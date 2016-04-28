#ifndef NUMBERCHAIN_INCLUDED
#define NUMBERCHAIN_INCLUDED

#include <vector>
#include <algorithm>
#include <iostream>

class NumberChain
{
public:
	void MultipleSubtractions(int);
	int GetValueInPreviousNumbers(int);

private:
	std::vector<int> m_previous_numbers;
	std::vector<int> m_sorted_numbers;

	void BreakDownInt(int);
	void TakeAndParseInput(int);
	void ArrangeDecending();
	void ArrangeAscending();
	void SubtractAscendingFromDecending();
	void PrintOutNumbers();

	int MergeVectorElements();
	int m_after_subtraction = 0;
protected:
};

#endif