#include<iostream>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
	int a[n],b[m];
	int asum,bsum;
	asum=bsum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		asum+=a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		bsum+=b[i];
	}
	
	double sa=1.0*(asum-bsum)/2;
	int flag=0;
//	cout<<"sa"<<" "<<sa<<endl;
	for(int i=0;i<=n;i++){
			if(flag)continue;
		for(int j=0;j<m;j++){
			if(flag)continue;
			if((double)(a[i]-b[j])==sa){
				 cout<< a[i] << " " << b[j]<<endl;
				flag=1;
			}
			if(i==n){
				cout<<-1<<endl;
				flag=1;
			}
			
			
		}
	}
	}
		
	
}