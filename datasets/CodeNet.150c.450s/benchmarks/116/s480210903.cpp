#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<utility>
#include<cmath>
#include<ctime>
#include<complex>

using namespace std;

#define REP(i,s,e) for(int i=int(s);i<=int(e);i++)
#define rep(i,n) for(int i=0;i<int(n);i++)


int main(){


	while(true){
		int n,k,s;
		cin >> n >> k;
		if(n==0 && k==0) break;

	    vector<int>a;
        int sum=0; int m;
		rep(i,k){
		cin >> s;
		a.push_back(s);
		sum+=a[i];
		}

		m=sum;

		REP(i,k,n-1){
		cin >> s;
		a.push_back(s);
		sum+=a[i]-a[i-k];
		if(m<=sum) m=sum;

		}

		cout << m << endl;

		a.clear();

	}

	return 0;
}