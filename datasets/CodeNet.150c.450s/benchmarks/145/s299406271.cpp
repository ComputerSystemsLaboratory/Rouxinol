#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string, int> table;
int main()
{
	string word, frequent, longest;
	size_t N = 0;
	while (cin >> word)
	{
		table[word]+=1;
		if (table[word] > N) 
		{
			frequent = word; 
			N = table[word];
		}
		if (word.size() > longest.size())longest = word;
	}
	cout << frequent <<' '<< longest << endl;
	return 0;
}
