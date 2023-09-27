#include<iostream>
using namespace std;
int main(){
	while(1){
		char d;
		char ans[101000];
		char f[1010000],g[101000];
		int n;
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>d;
			f[i]=d;
			cin>>d;
			g[i]=d;
		}
		int s;
		cin>>s;
		for(int i=0;i<s;i++){
			cin>>d;
			ans[i]=d;
			for(int j=0;j<n;j++){
				if(ans[i]==f[j]){
					ans[i]=g[j];
					break;
					
				}
			}
		}
		for(int i=0;i<s;i++){
			cout<<ans[i];
		}
		cout<<endl;
	}
}