#include <iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m,n){
		int a[11]={0};
		for(int i=0;i<n;i++){
			int b,c;
			cin>>b>>c;
			a[c]+=b;
		}
		int ans=0;
		for(int i=10;i>=0;i--){
			if(m-a[i]>=0) m-=a[i];
			else{
				ans+=i*(a[i]-m);
				m=0;
			}
		}
		cout<<ans<<endl;
	}
}