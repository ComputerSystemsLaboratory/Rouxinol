#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Counting(vector<int>& Count, int i, string Letter, char alphabet, char Alphabet)
{
	for(unsigned int j = 0; j < Letter.size(); j++){
		if(Letter[j] == alphabet || Letter[j] == Alphabet) Count[i]++;
	}
}

int main()
{
	vector<int> Count(26, 0);
	string Letter;
	while(getline(cin, Letter)){
		for(unsigned int i = 0; i < 26; i++){
			char alphabet = 'a';
			char Alphabet = 'A';
			alphabet += i;
			Alphabet += i;
			Counting(Count, i, Letter, alphabet, Alphabet);
		}
	}

	for(unsigned int i = 0; i < 26; i++){
		char alphabet = 'a' + i;
		cout << alphabet << " : " << Count[i] << endl;
	}

	return 0;
}