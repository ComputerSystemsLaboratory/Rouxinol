#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#define rep(i, n) for(int i = 0;i < n;i++)
#define repb(i, n) for(int i = n;i >= 0;i--)
#define reps(i, m, n) for(int i = m;i < n;i++)
#define repsb(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;

int main(){
	int n,p,c,r;
	while(true)
	{
		cin>>n>>r;
		if(n==0)	return 0;
		int b[50];
		rep(i,n){
			b[i]=n-i;
		}

		rep(s,r){
			int a[50],j;
			cin>>p>>c;
			for(j=0;j<c;j++){
				a[j]=b[p+j-1];
			}
			for(;j<p+c-1;j++){
				a[j]=b[j-c];
			}
			for(;j<n;j++){
				a[j]=b[j];
			}
			rep(t,n){
				b[t]=a[t];
			}
		}
		cout<<b[0]<<endl;
	}

	return 0;
}
