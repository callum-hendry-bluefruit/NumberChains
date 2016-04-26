#include "..\source\NumberChains.h"
#include "gtest/gtest.h"
#include <cassert>
#include <iostream>

TEST(testChain, arrange_digits_in_decending_order)
{
	NumberChain decendingOrder;

	decendingOrder.m_sorted_numbers = { 1, 9, 5, 7, 6, 3, 4, 8, 2 };

	decendingOrder.ArrangeDecending();

	std::vector<int> expected_result = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	EXPECT_EQ(expected_result, decendingOrder.m_sorted_numbers);
}

TEST(testChain, arrange_digits_in_ascending_order)
{
	NumberChain ascendingOrder;

	ascendingOrder.m_sorted_numbers = { 1, 9, 5, 7, 6, 3, 4, 8, 2 };

	ascendingOrder.ArrangeAscending();

	std::vector<int> expected_result = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	EXPECT_EQ(expected_result, ascendingOrder.m_sorted_numbers);
}

TEST(testChain, merge_elements_from_vector)
{
	NumberChain mergingElements;

	mergingElements.m_sorted_numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int expected_result = 123456789;

	EXPECT_EQ(expected_result, mergingElements.MergeVectorElements());
}

TEST(testChain, subtract_decending_from_ascending)
{
	//subtracting the number obtained in(2) from the number
	//obtained(1) to form a new number

	
}