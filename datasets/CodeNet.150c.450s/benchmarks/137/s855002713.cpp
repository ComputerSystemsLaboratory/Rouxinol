#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ChangeToNumber(string Word)
{
	int Number = 0;
	int Keta = 1;
	int Kurai = 0;
	while(Kurai < Word.size()){
		
		if(Word[Word.size() - Kurai - 1] == 'A') Number += Keta * 1;
		if(Word[Word.size() - Kurai - 1] == 'C') Number += Keta * 2;
		if(Word[Word.size() - Kurai - 1] == 'G') Number += Keta * 3;
		if(Word[Word.size() - Kurai - 1] == 'T') Number += Keta * 4;
		Keta *= 4;
		Kurai ++;
	}
	return Number;
}

void Judge(vector<bool>& Exist, string& Command, string& Word)
{
	if(Command == "insert"){
		Exist[ChangeToNumber(Word)] = true;
	}else{
		if(Exist[ChangeToNumber(Word)]){
		    cout << "yes" << endl;
		}else{
		    cout << "no" << endl;
		}
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<bool> Exist;
	Exist.resize(16777216);
	for(int i = 0; i < 16777216; i++){
		Exist[i] = false;
	}
	for(int i = 0; i < n; i++){
		string Command;
		string Word;
		cin >> Command;
		cin >> Word;
		Judge(Exist, Command, Word);
	}
	return 0;
}