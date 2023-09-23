#include <iostream>
#include <algorithm>
using namespace std;

#define for_(i,a,b) for(int i = (a);i < (b);i++)
#define rfor_(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define rep(i,n) for_(i,0,(n))
#define rrep(i,n) rfor_(i,0,(n))

int a[3];

int main(){
	cin.tie(0);
	
	rep(i, 3)cin>>a[i];
	
	sort(a, a+3);
	
	cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;
	
	return 0;
}

