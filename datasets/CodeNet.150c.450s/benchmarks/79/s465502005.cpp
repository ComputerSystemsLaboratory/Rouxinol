#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;

int main(){
	int n,r;
	while(cin>>n>>r&&n){
		stack<int> st,tmp1,tmp2;
		int p,c;
		REP(i,1,n+1){
			st.push(i);
		}
		REP(i,0,r){
			cin>>p>>c;
			REP(j,0,p-1){
				tmp1.push(st.top());
				st.pop();
			}
			REP(j,0,c){
				tmp2.push(st.top());
				st.pop();
			}
			while(!tmp1.empty()){
				st.push(tmp1.top());
				tmp1.pop();
			}
			while(!tmp2.empty()){
				st.push(tmp2.top());
				tmp2.pop();
			}
		}
		p(st.top());
	}

	return 0;
}