#include <iostream>
#include <string>
using namespace std;

int main(){
	string s[1000];
	int c = 0;
	while(cin >> s[c]){c++;}
	int th,tm;
	int h = 0;
	int m = 0;
	for(int i=0;i<c;i++){
		if(s[i].size()>m){ m = s[i].size(); tm = i; }
		int a = 0;
		for(int j=0;j<c;j++) if(s[i]==s[j]) a++;
		if(a>h){ h = a; th = i; }
	}
	cout << s[th] << " " << s[tm] << endl;
}