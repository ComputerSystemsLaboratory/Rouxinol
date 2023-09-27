#include <iostream>
#include <cmath>
using namespace std;
int ans1,ans2;
int sumt,sumh;
int n,m;
int t[101],h[101];
int main(){
	while(1){
		cin >>n >>m;
		if(n==0&&m==0)break;
		sumt=sumh=0;
		for(int i=0;i<n;i++){
			cin >>t[i];
			sumt+=t[i];
		}
		for(int i=0;i<m;i++){
			cin >>h[i];
			sumh+=h[i];
		}
		ans1=-1;
		ans2=101;
		int a=abs(sumt-sumh);
		if((a%2)==1){
			cout <<ans1<<endl;
		}else{
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if( ((sumt-sumh)/2)==(t[i]-h[j])){
						if(ans2>h[j]){
							ans1=t[i];
							ans2=h[j];
						}
					}
				}
			}
			if(ans1==-1){
				cout << ans1<<endl;
			}else{
				cout <<ans1 << " "<<ans2 <<endl;
			}

		}
	}
	return 0;
}