#ifndef NUMBERCHAIN_INCLUDED
#define NUMBERCHAIN_INCLUDED

#include<vector>
#include<algorithm>

class NumberChain
{
public:
	void MultipleSubtractions();
	void mock_SetSortedNumbers(std::vector<int> param);
	int GetValueInPreviousNumbers(int);

private:
	std::vector<int> m_previous_numbers;
	std::vector<int> m_sorted_numbers;

	void BreakDownInt();
	void TakeAndParseInput();
	void ArrangeDecending();
	void ArrangeAscending();
	void SubtractAscendingFromDecending();

	int MergeVectorElements();
	int m_after_subtraction = 0;
protected:
};

#endif