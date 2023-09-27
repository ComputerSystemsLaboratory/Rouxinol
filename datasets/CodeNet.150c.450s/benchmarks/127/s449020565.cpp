#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define mp(a,b) make_pair(a,b)
using namespace std;


int main(){
	int m;
	cin>>m;
	REP(i,0,m){
		set<string> s;
		string str;

		cin>>str;
		REP(j,1,str.size()){
			string left,right,l,r;
			left=str.substr(0,j);
			right=str.substr(j,str.size()-j);
			for(int k=left.size()-1;k>=0;k--){
				l+=left[k];
			}
			for(int k=right.size()-1;k>=0;k--){
				r+=right[k];
			}
			s.insert(left+right);
			s.insert(right+left);
			s.insert(l+right);
			s.insert(right+l);
			s.insert(left+r);
			s.insert(r+left);
			s.insert(l+r);
			s.insert(r+l);
		}
		p(s.size());
	}
	return 0;
}