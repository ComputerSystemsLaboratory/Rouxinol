#include <iostream>
using namespace std;

#define for_(i,a,b) for(int i = (a);i < (b);i++)
#define rfor_(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define rep(i,n) for_(i,0,(n))
#define rrep(i,n) rfor_(i,0,(n))

int W, H, x, y, r;

int main(){
	cin.tie(0);
	cin>>W>>H>>x>>y>>r;
	if((r<=x && r<=y) && (x <= W-r && y <= H-r))cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}

