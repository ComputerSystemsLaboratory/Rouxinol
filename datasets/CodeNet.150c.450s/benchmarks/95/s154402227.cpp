#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<(S)<<endl
#define ck(a,b) (0<=(a)&&(a)<(b))

using namespace std;


int main(){
	int n;
	while(cin>>n,n){
		string s;
		pair<int,int> now={0,0};
		bool b=true;//true:floor
		int ans=0;
		REP(i,0,n){
			cin>>s;
			if(s=="lu") now.first=1;
			else if(s=="ru") now.second=1;
			else if(s=="ld") now.first=0;
			else if(s=="rd") now.second=0;

			if((now==make_pair(1,1)&&b)||(now==make_pair(0,0)&&!b)){
				ans++;
				b=!b;
			}
		}
		p(ans);
	}
	return 0;
}