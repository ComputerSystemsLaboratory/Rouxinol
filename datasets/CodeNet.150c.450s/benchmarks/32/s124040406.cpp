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
	int m,mi,mx,n;
	while(1){
		cin>>m>>mi>>mx;
		if(m==0&&mi==0&&mx==0)	break;
		int p[10000],d=0;
		reps(i,1,m+1){
			cin>>p[i];
		}
		n=0;
		reps(i,mi,mx+1){
			if(d<=p[i]-p[i+1]){
				d=p[i]-p[i+1];
				n=i;
			}
		}
		cout<<n<<endl;
	}

	return 0;
}
