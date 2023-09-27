#include <iostream>
#include <cstring>
#include <sstream>
#include <cctype>
using namespace std;

string str[101];
int s = 0;

int main(){
	while (true){
		int m;
		cin >> str[s];
		if (str[s] == "-")break;
		cin >> m;
		for (int i = 0; i < m; i++){
			int h=0;
			cin >> h;
			string strh;
			strh = str[s].substr(0,h);
			str[s].erase(0,h);
			str[s] += strh;
		}
		s++;
	}
	for (int i = 0; i < s; i++){
		cout << str[i] << endl;
	}
	return 0;
}
