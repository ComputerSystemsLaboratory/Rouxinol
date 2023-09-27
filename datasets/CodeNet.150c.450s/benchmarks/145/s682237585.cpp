#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,int> table;

int main(){
	string word, frequent, longest;
	int frequent_length = 0;
	while (cin >> word){
		table[word] += 1;
		if (table[word] > frequent_length){
			frequent_length = table[word];
			frequent = word;
		}
		longest = (word.size() > longest.size()) ? word : longest;
	}	
	cout << frequent << ' ' << longest << endl;
	return 0;
}