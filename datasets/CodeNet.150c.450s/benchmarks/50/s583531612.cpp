#include "bits/stdc++.h"

using namespace std;

const char en = '\n';
using  ll =          long long;
using ull = unsigned long long;

#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,s,g) for(int i=s;i<g;i++)

int main(){
	ios::sync_with_stdio(false);cin.tie();
	
	while(true){
		int in,result=0,c[]{500,100,50,10,5,1};
		cin>>in;

		if(in==0) break;

		in*=-1;
		in+=1000;

		REP(i, 6){
			result+=in/c[i];
			in%=c[i];
		}

		cout<<result<<en;
	}


	return 0;
}