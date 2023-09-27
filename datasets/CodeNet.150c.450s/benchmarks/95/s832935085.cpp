#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)

using namespace std;

int main(){
	int n;
	while(cin >> n, n){
		int l=0, r=0, b=1;
		int count=0;
		rep(i,n){
			string f;
			cin >> f;
			if( f[0] == 'l' ){
				l ^= 1;
			}else{
				r ^= 1;
			}
			if( l == b && r == b ){
				count++;
				b ^= 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}