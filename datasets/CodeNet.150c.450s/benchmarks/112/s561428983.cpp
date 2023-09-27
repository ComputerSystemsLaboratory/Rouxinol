#include<iostream>
#include<map>
using namespace std;

int main(void){
	int n,m;
	while(cin >> n, n != 0){
		char c, d;
		map<char, char> tb;
		for(int i = 0; i < n; i++){
			cin >> c >> d;
			tb[c] = d;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> c;
			if(tb.find(c) != tb.end())
				cout << tb[c];
			else
				cout << c;
		}
		cout << endl;
	}
	return 0;
}