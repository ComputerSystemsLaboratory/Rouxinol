#include <iostream>
using namespace std;

#define for_(i,a,b) for(int i = (a);i < (b);i++)
#define rfor_(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define rep(i,n) for_(i,0,(n))
#define rrep(i,n) rfor_(i,0,(n))

int main(){
	cin.tie(0);
	
	int i=1;
	int n;
	while(cin>>n,n)cout<<"Case "<<(i++)<<": "<<n<<endl;
	
	return 0;
}

