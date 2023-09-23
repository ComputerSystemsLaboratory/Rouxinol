#include<iostream>
#include<string.h>
using namespace std;
int n,ans;
bool a[1000000];
int main(){
	while(cin>>n){
		memset(a,true,sizeof(a));
		a[0]=false;
		a[1]=false;
		ans=0;
		for(int i=2;i<=n;i++){
			if(a[i])
				for(int j=2*i;j<=n;j+=i)
					a[j]=false;
		}
		for(int i=1;i<=n;i++)
			if(a[i]) ans++; 
		cout<<ans<<endl;
	}
} 
