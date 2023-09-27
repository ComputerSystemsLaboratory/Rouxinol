#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;

int main(){
	int N;
	while(cin>>N,N){
		int h,m,s,jikoku,sum=0,maxi=0;
		int imos[250000]={0};
		REP(i,0,N){
			scanf("%2d:%2d:%2d",&h,&m,&s);
			jikoku=h*10000+m*100+s;
			imos[jikoku+1]++;
			scanf("%2d:%2d:%2d",&h,&m,&s);
			jikoku=h*10000+m*100+s;
			imos[jikoku+1]--;
		}

		REP(i,0,250000){
			sum+=imos[i];
			maxi=max(maxi,sum);
		}

		p(maxi);
	}

	return 0;
}