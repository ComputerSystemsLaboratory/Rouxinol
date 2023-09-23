#include <iostream>
using namespace std;

using ll = long long;

#define for_(i,a,b) for(int i = (a);i < (b);i++)
#define rfor_(i,a,b) for(int i = (b)-1;i >= (a);i--)

#define rep(i,n) for_(i,0,(n))
#define rrep(i,n) rfor_(i,0,(n))

int n;
int a[102];

int main(){
	cin.tie(0);
	
	cin>>n;
	rep(i, n)cin>>a[i];
	
	rrep(i, n) {
	    cout<<a[i];
	    if(i>0)cout<<' ';
	}
	
	cout<<endl;
	
	return 0;
}

