#include<iostream>
#include<algorithm>	
#define rep(i,a) for(int i=0;i<a;i++) 
using namespace std;
const int inf=1e8;
int main(){
	int n;
	while(cin>>n,n){
		int mi=inf;
		rep(i,110)rep(j,1010)mi=min(mi,(n<i*i*i+j*j?inf:i+j+n-i*i*i-j*j));
		cout<<mi<<endl;
	}
}