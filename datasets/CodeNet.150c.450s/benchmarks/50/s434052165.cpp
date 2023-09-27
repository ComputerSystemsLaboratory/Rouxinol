#include <iostream>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int a[]={500,100,50,10,5,1};
	int n;
	while(cin>>n,n){
		n=1000-n;
		int ans=0;
		rep(i,6){
			while(1){
				if(n<a[i]) break;
				else{
					ans++;
					n-=a[i];
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}