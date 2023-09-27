#include<iostream>
using namespace std;

int main(){
	int n,m,a[100],b[100],min[3],asum,bsum,sa;
	while(true){
		cin>>n>>m;
		if(n==0 && m==0){
			break;
		}
		min[0]=1000000000;
		min[1]=-1;
		min[2]=-1;
		asum=0;
		bsum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			asum += a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			bsum += b[i];
		}
		sa=asum-bsum;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if((a[i]-b[j])*2==sa && min[0]>a[i]+b[j]){
					min[0]=a[i]+b[j];
					min[1]=a[i];
					min[2]=b[j];
				}
			}
		}
		if(min[0]>1000000){
			cout<<"-1"<<endl;
		}
		else{
			cout<<min[1]<<' '<<min[2]<<endl;
		}
	}
	return 0;
}