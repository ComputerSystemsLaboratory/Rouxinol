#include <iostream>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <utility>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define INF 1000000001
#define mod 1000000007
using namespace std;

int main(){
	//cin.tie(0);
	//ios::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> a(n),dp;
	rep(i,n){
		cin>>a[i];
	}
	dp.push_back(a[0]);
	FOR(i,1,n){
		vector<int>::iterator itr;
		itr=lower_bound(dp.begin(), dp.end(), a[i]);
		if(itr==dp.end()){
			dp.insert(itr,a[i]);
		}else{
			dp.erase(itr);
			dp.insert(itr,a[i]);
		}
	}
	cout<<dp.size()<<endl;
}