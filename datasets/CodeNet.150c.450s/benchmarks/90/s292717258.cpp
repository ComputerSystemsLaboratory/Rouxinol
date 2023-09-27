#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

bool cmp(pair<int,int> a, pair<int,int> b){
	if( a.second == b.second ) return a.first < b.first;
	return a.second > b.second;
}
int main(){
	map<int,int> mii;
	vector<pair<int,int> > vp;
	int n;
	while(~scanf("%d",&n)){
		mii[n]++;
	}
	map<int,int>::iterator it;
	for(it=mii.begin(); it!=mii.end(); it++)vp.push_back(*it);
	sort(vp.begin(), vp.end(), cmp);
	int i;
	for(i=1; i<vp.size() && vp[i].second==vp[i-1].second; i++);
	rep(j,i)printf("%d\n",vp[j].first);
	/*
	rep(j,vp.size()){
		printf("%d %d\n",vp[j].first, vp[j].second);
	}
	*/
	return 0;
}