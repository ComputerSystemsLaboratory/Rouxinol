#include<string>
#include<cstring>
#include<iostream>
using namespace std;

int main(){
	string str;
	string word;
	int cnt = 0;
	cin >> word;
	string::iterator wp, sp;
	wp = word.begin();
	while(wp != word.end()){
		*wp = tolower(*wp);
		wp++;
	}
	while(true){
		cin>>str;
		if(string::npos != str.find("END_OF_TEXT",0)) break;
		sp = str.begin();
		while(sp != str.end()){
			*sp = tolower(*sp);
			sp++;
		}
		if(str == word) cnt++;
	}
	cout << cnt << endl;
	return 0;
}