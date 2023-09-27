#include <iostream>
#include <vector>
#include <string>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
long long int mod(long long int x){
	return x%1000000007;
}

int main(){
	long long int m,n,tmp,j,ans;
	cin>>m>>n;
	tmp=m;
	ans=1;
	while(n!=0){
		for(j=1;j<=n/2;j*=2){
			tmp*=tmp;
			if(tmp>=10000) tmp=mod(tmp);
		}
		n=n-j;
		ans*=tmp;
		if(ans>=1000000) ans=mod(ans);
		tmp=m;
	}
	cout<<ans<<endl;
}