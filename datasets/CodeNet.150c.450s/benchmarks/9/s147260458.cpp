#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string check(int num);

int main(){
	string s;
	int n,h;
	while(cin >> s){
		if(s == "-")break;
		cin >> n;
		for(int i = 0;i < n;i++){
			cin >> h;
			s = s.substr(h) + s.substr(0,h);
		}
		cout << s << "\n";
	}
	
	return 0;
}