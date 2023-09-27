#include <iostream>

using namespace std;

int main()
{
	int counter[101];
	for(auto& i : counter)
		i = 0;

	{
		size_t input;
		while(cin >> input)
			counter[input]++;
	}

	int max = 0;
	for(auto& i : counter)
		if(max < i)
			max = i;

	for(int i = 1; i < 101; i++)
		if(counter[i] == max)
			cout << i << endl;

	return 0;
}