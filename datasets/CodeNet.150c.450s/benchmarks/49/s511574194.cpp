/*
 * tokuten_syukei_software.cpp
 *
 *  Created on: 2017/02/02
 *      Author: Nishio
 */
#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;

int main(){
	int N;
	while(cin>>N,N){
		int mx=0,mn=1000,sum=0;
		int s[N];
		for(int i=0;i<N;i++){
			cin>>s[i];
			sum+=s[i];
			mx=max(mx,s[i]);
			mn=min(mn,s[i]);
		}
		sum-=mx+mn;
		sum/=N-2;
		p(sum);
	}

	return 0;
}