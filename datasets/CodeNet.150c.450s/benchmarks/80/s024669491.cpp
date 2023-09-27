#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)


int main(){

	int a,b; int S=0; int T=0;
	rep(i,4){
		cin >> a;
		S+=a;
	}

	rep(i,4){
		cin >> b;
		T+=b;
	}

	if(S>=T) cout << S << endl;
	else cout << T << endl;


	return 0;
}