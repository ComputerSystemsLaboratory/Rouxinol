#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans;
	int y,m,d;
	for(int i=0;i<n;i++){
		ans=1;
		cin>>y>>m>>d;
		for(int j=y;j<=999;j++){
			if(j%3==0){
				for(int k=m;k<=10;k++){
					ans+=20-d;
					d=0;
				}
			}
			else{
				for(int k=m;k<=10;k++){
					if(k%2==1){
						ans+=20-d;
					}
					else{
						ans+=19-d;
					}
					d=0;
				}
			}
			m=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}