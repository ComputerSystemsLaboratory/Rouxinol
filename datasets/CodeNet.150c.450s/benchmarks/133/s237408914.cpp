#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(x,to) for(x=0;x<(to);x++)
#define FORR(x,arr) for(auto& x:arr)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define ALL(a) (a.begin()),(a.end())
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
//-------------------------------------------------------


int D;
int C[26];
int S[400][26];
int T[400];
int day[26];

void solve() {
	int i,j,k,l,r,x,y; string s;
	
	cin>>D;
	FOR(i,26) cin>>C[i];
	FOR(i,D) {
		FOR(j,26) cin>>S[i][j];
	}
	
	int sum=0;
	FOR(i,D) {
		cin>>T[i];
		T[i]--;
		sum+=S[i][T[i]];
		day[T[i]]=i+1;
		FOR(j,26) sum-=C[j]*(i+1-day[j]);
		cout<<sum<<endl;
	}
}


int main(int argc,char** argv){
	string s;int i;
	if(argc==1) ios::sync_with_stdio(false), cin.tie(0);
	FOR(i,argc-1) s+=argv[i+1],s+='\n'; FOR(i,s.size()) ungetc(s[s.size()-1-i],stdin);
	cout.tie(0); solve(); return 0;
}
