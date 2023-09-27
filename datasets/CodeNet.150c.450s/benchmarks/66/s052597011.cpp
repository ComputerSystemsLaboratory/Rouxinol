#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<(S)<<endl
#define ck(a,b) (0<=(a)&&(a)<(b))

using namespace std;


int main(){
	int N,M;
	cin>>N;
	set<string> s;
	string str;
	REP(i,0,N) cin>>str,s.insert(str);
	cin>>M;
	bool flag=true;
	REP(i,0,M){
		cin>>str;
		if(s.find(str)!=s.end()){
			if(flag) cout<<"Opened by ";
			else cout<<"Closed by ";
			flag=!flag;
		}else	cout<<"Unknown ";
		p(str);
	}
	return 0;
}