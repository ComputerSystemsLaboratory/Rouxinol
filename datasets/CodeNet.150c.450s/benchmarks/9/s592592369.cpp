#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string s;
	while(1){
		cin >> s;
		if(s=="-") break;
		int c = s.length();
		int n;
		cin >> n;
		for (int i=0;i<n;i++){
			int a;
			cin >> a;
			string t;
			t = s.substr(a,c-a) + s.substr(0,a);
			s = t;
		}
		cout << s << endl;
	}
}