#include "..\source\NumberChains.h"
#include "gtest/gtest.h"
#include <cassert>
#include <iostream>

TEST(testChain, subtract_ascending_from_decending_multiple_times_until_a_number_is_repeated)
{
	NumberChain MultipleSubtraction;

	std::vector<int> mock_numbers = { 1, 9, 5, 7, 6, 3, 4, 8, 2 };
	MultipleSubtraction.mock_SetSortedNumbers(mock_numbers);

	MultipleSubtraction.MultipleSubtractions();

	std::vector<int> expected_result = { 864197532 };
	EXPECT_EQ(expected_result[0], MultipleSubtraction.GetValueInPreviousNumbers(0));
}

TEST(testChain, multiple_subtractions_with_different_number)
{
	NumberChain MultipleSubtraction;

	std::vector<int> mock_numbers = { 1, 2, 3, 4 };
	MultipleSubtraction.mock_SetSortedNumbers(mock_numbers);

	MultipleSubtraction.MultipleSubtractions();

	std::vector<int> expected_result = { 3087, 8352, 6174};
	EXPECT_EQ(expected_result[0], MultipleSubtraction.GetValueInPreviousNumbers(0));
	EXPECT_EQ(expected_result[1], MultipleSubtraction.GetValueInPreviousNumbers(1));
	EXPECT_EQ(expected_result[2], MultipleSubtraction.GetValueInPreviousNumbers(2));
}