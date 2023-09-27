#include <cstdio>
#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	while(cin >> n ,n){
		char table[128];
		rep(i,128)table[i] = i;
		rep(i,n){
			char a,b;
			cin >> a >> b;
			table[a] = b;
		}
		int m; cin >> m;
		rep(i,m){
			char c;
			cin >> c;
			putchar(table[c]);
		}
		puts("");
	}
}