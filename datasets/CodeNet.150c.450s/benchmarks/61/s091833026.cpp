#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define ck(n,a,b) (a<=(n)&&(n)<b)
using namespace std;


int main(){
	int N,A,B,C,X;
	while(cin>>N>>A>>B>>C>>X,N){
		int y,ans=-1;
		queue<int> Y;
		REP(i,0,N) cin>>y,Y.push(y);
		REP(i,0,10001){
			if(Y.front()==X) Y.pop();
			if(Y.empty()){
				ans=i;
				break;
			}
			X=(A*X+B)%C;
		}
		p(ans);
	}
	return 0;
}