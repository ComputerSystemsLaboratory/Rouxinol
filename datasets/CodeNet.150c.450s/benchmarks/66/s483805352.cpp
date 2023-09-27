#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
#define REP(i,b) FOR(i,0,b)

int read(){
	int i;
	scanf("%lld",&i);
	return i;
}

signed main(){
	int N=read();
	string U[N];
	REP(i,N){
		cin >> U[i];
	}
	int M=read();
	string T[M];
	bool keyOpend = false; 
	REP(i,M){
		cin >> T[i];
		REP(j,N){
			if(T[i].compare(U[j])==0){
				if(keyOpend){
					cout << "Closed by " << T[i] << endl;
				}
				else{
					cout << "Opened by " << T[i] << endl;
				}
				keyOpend = !keyOpend;
				break;
			}
			if(j==N-1) cout << "Unknown " << T[i] << endl;
		}
	}
}