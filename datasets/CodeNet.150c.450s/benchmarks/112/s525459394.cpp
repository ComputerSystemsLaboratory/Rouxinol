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

		int n,m;
		char p,q,r;
		vector<char>u;
		vector<char>v;

		cin >> n;
		if(n==0) break;

		rep(i,n){
		cin >> p >> q;

		u.push_back(p);
		v.push_back(q);
		}



		cin >> m;

		rep(i,m){
		cin >> r;

        bool f=false;
        int s;
		rep(j,n)
		if(u[j]==r){ s=j; f=true; break;}

		if(f) cout << v[s];
		else cout << r;

	    }

		cout << endl;
        u.clear(); v.clear();
	}




	return 0;
}