
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <list>

#define timemax 1260+1
using namespace std;

//文字列反転関数
string revstr(string s) {
	string ret;
	for(int i = s.length() - 1; i >= 0; i--)
		ret += s.at(i);
	return ret;
}

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);
	
	int m;
	cin >> m;
	for(int i = 0; i < m; i++) {
		string s;
		list<string> strlist;
		cin >> s;

		//文字列を分割する
		for(int j = 1; j < s.length(); j++) {
			string sub[2];
			sub[0] = s.substr(0,j);
			sub[1] = s.substr(j,string::npos);
			//cout << sub[0] << "+" << sub[1] << endl;
			//文字列を結合する
			for(int k = 0; k < 2; k++) {
				string temp[2];
				for(int l = 0; l < 4; l++) {
					temp[0] = sub[0];
					temp[1] = sub[1];
					if( l & 1 ) temp[0] = revstr(temp[0]);
					if( l & 2 ) temp[1] = revstr(temp[1]);
					string tmp = temp[k] + temp[1 - k];
					strlist.push_back(tmp);
				}
			}
		}
		strlist.sort();
		strlist.unique();
		cout << strlist.size() << endl;
	}

	//while(1){}
	return 0;
}