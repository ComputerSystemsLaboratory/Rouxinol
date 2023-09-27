#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, int> counter;
	string longest;

	{
		string input;
		while(cin >> input)
		{
			if(longest.length() < input.length())
				longest = input;

			if(counter.find(input) == counter.end())
				counter[input] = 0;
			else
				counter[input]++;
		}
	}

	int frequency = 0;
	string word;
	for(auto i : counter)
		if(frequency < i.second)
		{
			frequency = i.second;
			word = i.first;
		}

	cout << word << ' ' << longest << endl;

	return 0;
}