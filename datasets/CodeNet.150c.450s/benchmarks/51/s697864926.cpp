#include "bits/stdc++.h"

using namespace std;

const char en = '\n';
using  ll =          long long;
using ull = unsigned long long;

#define REP(i  ,n) for(int i=0;i<n;i++)
#define FOR(i,s,g) for(int i=s;i<g;i++)

const ll INFL = 810000001919114514;
const int INF =         1919114514;

int main(){
	ios::sync_with_stdio(false);cin.tie();

	deque<int> v;

	int buf;
	REP(i, 28){
		cin>>buf;
		v.push_back(buf);
	}

	sort(v.begin(),v.end());

	FOR(i,1,31){
		if(i!=v.front()){
			cout<<i<<en;
		} else{
			v.pop_front();
		}
	}

	return 0;
}