#include<iostream>
using namespace std;
int main(){
	int n;
	//x+y*y+z*z*zの、xが最少となるyとzの組み合わせを探す。
	while(cin>>n,n){
		int ans=10e8,now=n,now2=n,ans2=0,tmp=10e8;
			for(int i=0;i*i<=n;i++){
				for(int j=0;j*j*j<=n;j++){
					if(n-i*i-j*j*j>=0){
						tmp=min(n-i*i-j*j*j,tmp);
						ans=min(i+j+(n-i*i-j*j*j),ans);
					}
				}
			}
			cout<<ans<<endl;
		}
		return 0;
	}