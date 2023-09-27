#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string word;
string par;

int cnt;

void inp(){
	cin >> word;
	transform(word.begin(),word.end(),word.begin(),::toupper);
	string line;
	while(true){
		cin >> line;
		if(!line.compare("END_OF_TEXT")) break;
		transform(line.begin(),line.end(),line.begin(),::toupper);
		cnt += !line.compare(word);
	}
}

int main(){
	inp();
	printf("%d\n",cnt);
	return 0;
}