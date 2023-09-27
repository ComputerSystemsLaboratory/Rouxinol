#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int main(){
	int n;
	while(cin >> n){
		if(n==0)break;
		map<char,char> mp;
		REP(i,n){
			char from,to;
			cin >> from >> to;
			mp[from] = to;
		}
		int n;
		cin >> n;
		REP(i,n){
			char c;
			cin >> c;
			if(mp[c] == 0){
				cout << c;
			}else{
				cout << mp[c];
			}
		}
		cout << endl;
	}
	return 0;
}