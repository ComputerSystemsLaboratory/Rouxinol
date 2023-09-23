#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define mp(a,b) make_pair(a,b)
using namespace std;


int main(){
	int e;
	while(cin>>e,e){
		int mini=1000000;
		int k;
		for(int z=0;(k=e-z*z*z)>=0;z++){
			int y=(int) sqrt(k)+0.00001;
			int x=k-y*y;
			mini=min(mini,x+y+z);
		}
		p(mini);
	}
	return 0;
}