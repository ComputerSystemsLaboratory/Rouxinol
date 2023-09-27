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

	vector<int>v(30,0);
	int n;

	rep(i,28){
	cin >> n;
	v[n-1]=1;
	}

	rep(i,30)
	if(v[i]==0)
	cout << i+1 << endl;

	return 0;
}