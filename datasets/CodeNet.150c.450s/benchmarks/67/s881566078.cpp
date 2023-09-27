#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main()
{
	int n;
	int a[1001];
	memset(a,0,sizeof(a));
	for(int i=1;i<=1000;i++){
		a[i]=a[i-1];
		a[i]+=i;
	}

	while(cin>>n && n!=0){
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=i+2;j<n;j++){
				if(a[j]-a[i]==n){ans++;}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}