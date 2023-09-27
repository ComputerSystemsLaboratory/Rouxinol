#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
	
	int N;
	int a[1001];
	cin >> N;
	while(N>0){
		REP(i,N)cin >> a[i];
		int m = 1e9;
		REP(i,N){
			REP(j,N){
				if(i != j)m = min(m, abs(a[i] - a[j]));
			}
		}
		cout << m << endl;
		cin >> N;
	}
	return 0;
}
