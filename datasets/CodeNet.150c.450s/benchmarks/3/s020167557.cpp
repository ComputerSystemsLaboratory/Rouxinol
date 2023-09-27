#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string s;
	int n;
	cin >> s >> n;
	while(n--){
		string q;
		cin >> q;
		if(q == "replace"){
			int a, b;
			string t;
			cin >> a >> b >> t;
			for(int i = a; i <= b; i++) s[i] = t[i - a];
		}else{
			int a, b;
			cin >> a >> b;
			if(q == "reverse") reverse(s.begin() + a, s.begin() + b + 1);
			else{
				for(int i = a; i <= b; i++) cout << s[i];
				cout << endl;
			}
		}
	}
}