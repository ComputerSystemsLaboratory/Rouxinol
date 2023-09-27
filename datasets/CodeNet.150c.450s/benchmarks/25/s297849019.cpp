#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> Count(26, 0);
string Letter;
char alphabet;
char Alphabet;

void Counting(int i){
	for(unsigned int j = 0; j < Letter.size(); j++){
		if(Letter[j] == alphabet || Letter[j] == Alphabet) Count[i]++;
	}
}

int main(){
	while(getline(cin, Letter)){
		for(unsigned int i = 0; i < 26; i++){
			alphabet = 'a';
			Alphabet = 'A';
			alphabet += i;
			Alphabet += i;
			Counting(i);
		}
	}

	for(unsigned int i = 0; i < 26; i++){
		char alphabet = 'a' + i;
		cout << alphabet << " : " << Count[i] << endl;
	}

	return 0;
}