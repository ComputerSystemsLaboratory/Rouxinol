#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	int m,n;
	cin >> s;
	while(s != "-"){
		cin >> m;
		for(int i = 0; i < m;i++){
			cin >> n;
			s = s.substr(n)+s.substr(0,n);
		}
		cout << s << endl;
		cin >> s;
	}
}

