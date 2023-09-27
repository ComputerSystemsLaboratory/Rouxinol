#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define ck(a,b) (0<=(a)&&(a)<(b))

using namespace std;

int main(){
	int N;
	cin>>N;
	REP(i,0,N){
		int y,m,d;
		int ans=0;
		cin>>y>>m>>d;
		while(y!=1000||m!=1||d!=1){
			d++;
			if(y%3){
				if(d>20-(m+1)%2) d=1,m++;
				if(m>=11) m=1,y++;
			}else{
				if(d>=21) d=1,m++;
				if(m>=11) m=1,y++;
			}
			ans++;
		}
		p(ans);
	}
	return 0;
}