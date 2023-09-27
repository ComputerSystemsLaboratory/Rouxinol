#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int N,M;
pair<int,int> p[10000];

int main(){
	while(cin>>N>>M&&N){
		int ans=0;
		rep(i,N){
			cin>>p[i].second>>p[i].first;
			ans+=p[i].second*p[i].first;
			p[i].first*=-1;
		}
		sort(p,p+N);
		rep(i,N){
			if(M>=p[i].second){M-=p[i].second;ans+=p[i].second*p[i].first;}
			else{ans+=M*p[i].first;break;}
		}
		cout<<ans<<endl;
	}
}