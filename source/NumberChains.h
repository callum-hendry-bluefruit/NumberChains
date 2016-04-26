#ifndef NUMBERCHAIN_INCLUDED
#define NUMBERCHAIN_INCLUDED

#include<vector>
#include<algorithm>

class NumberChain
{
public:
	std::vector<int> m_sorted_numbers;

	void TakeAndParseInput();
	void ArrangeDecending();
	void ArrangeAscending();

	int MergeVectorElements();
	void SubtractAscendingFromDecending();

private:
protected:
};

#endif