#include <iostream>
using namespace std;

#define for_(i,a,b) for(int i = (a);i < (b);i++)
#define rfor_(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define rep(i,n) for_(i,0,(n))
#define rrep(i,n) rfor_(i,0,(n))

int n, m;

int main(){
	cin.tie(0);
	
	while(cin>>n>>m,n||m)cout<<(n<m?n:m)<<' '<<(m<n?n:m)<<endl;

	return 0;
}

