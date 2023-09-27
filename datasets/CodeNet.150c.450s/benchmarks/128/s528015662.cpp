#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
typedef long long LL;
int main(){
	string A;
	cin>>A;
	string B;
	REP(i,A.size()){
	    B.push_back(A[A.size()-1-i]);
	}
        cout<<B<<endl;
	return(0);
}