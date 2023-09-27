#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;


int main(){
	int a[21],L;
	int x[6]={1,10,100,1000,10000,100000};
	while(cin>>a[0]>>L&&(a[0]||L)){
		bool flag=false;
		int ansj,ansi;
		for(int i=1;!flag;i++){
			int rec[6]={0};
			int t=0,mx=0,mn=0;

			for(int j=a[i-1];j>0;j/=10){
				rec[t]=j%10;
				t++;
			}
			sort(rec,rec+L);
			REP(j,0,L){
				mx+=rec[j]*x[j];
				mn+=rec[L-1-j]*x[j];
			}
			a[i]=mx-mn;
			REP(j,0,i){
				if(a[j]==a[i]){
					ansj=j;
					ansi=i;
					flag=true;
				}
			}

		}
		cout<<ansj<<" "<<a[ansj]<<" "<<ansi-ansj<<endl;;
	}

	return 0;
}