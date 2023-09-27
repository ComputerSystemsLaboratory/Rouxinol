#include <iostream>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main()
{
	for(int n;cin>>n;){
		int res=0;
		rep(i,10) rep(j,10) rep(k,10) rep(l,10){
			if(i+j+k+l==n)
				res++;
		}
		cout<<res<<endl;
	}
	
	return 0;
}