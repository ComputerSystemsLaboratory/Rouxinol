#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int ans=0;
		loop(i,2,n+1){
			loop(j,1,n){
				int sum=i*j+i*(i-1)/2;
				if(sum==n)ans++;
				if(sum>n)break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}