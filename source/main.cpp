#include "NumberChains.h"

using namespace ::std;

int main()
{
	int input_int = 0;
	cin >> input_int;

	NumberChain MainChain;

	MainChain.MultipleSubtractions(input_int);

	char pause;
	cin >> pause;

	return 0;
}