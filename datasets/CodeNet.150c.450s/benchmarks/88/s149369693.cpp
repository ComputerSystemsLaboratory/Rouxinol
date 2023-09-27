#include<iostream>

using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b && a&&b){
		int ans[2]={150,150};
		for(int i=1;i<150;i++){
			for(int j=i+1;j<=150;j++){
				if(a*a+b*b<i*i+j*j){
					if(ans[0]*ans[0]+ans[1]*ans[1]>i*i+j*j){
						ans[0]=i;ans[1]=j;
					}
					else if(ans[0]*ans[0]+ans[1]*ans[1]==i*i+j*j && i<ans[0]){
						ans[0]=i;ans[1]=j;
					}
				}
				else if(a*a+b*b==i*i+j*j && a<i){
					if(ans[0]*ans[0]+ans[1]*ans[1]>i*i+j*j){
						ans[0]=i;ans[1]=j;
					}
					else if(ans[0]*ans[0]+ans[1]*ans[1]==i*i+j*j && i<ans[0]){
						ans[0]=i;ans[1]=j;
					}
				}
			}
		}
		cout<<ans[0]<<" "<<ans[1]<<endl;
	}
}