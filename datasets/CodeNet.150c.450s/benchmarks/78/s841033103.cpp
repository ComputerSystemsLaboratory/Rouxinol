#include<iostream>
#include<algorithm>
using namespace std;
int d1[1000001]={},d2[1000001]={};
int main(){
	int n,i=0,j=0;
	int pollock1[181]={},pollock2[46]={};
	for(i=1;i*(i+1)*(i+2)/6<1000000;i++){
		pollock1[i-1]=i*(i+1)*(i+2)/6;
		if(pollock1[i-1]%2)
		pollock2[j++]=pollock1[i-1];
	}
	for(i=0;i<1000001;i++){
		d1[i]=9999999;
		d2[i]=9999999;
	}
	for(i=0;i<180;i++)
		d1[pollock1[i]]=1;
	for(i=0;i<45;i++)
		d2[pollock2[i]]=1;
	
	for(i=1;i<1000001;i++){
		for(j=0;j<180;j++){
			if(d1[i] && i+pollock1[j]<1000001){
				d1[i+pollock1[j]]=min(d1[i+pollock1[j]],d1[i]+1);
			}
		}
	}
	for(i=1;i<1000001;i++){
		for(j=0;j<45;j++){
			if(d2[i] && i+pollock2[j]<1000001){
				d2[i+pollock2[j]]=min(d2[i+pollock2[j]],d2[i]+1);
			}
		}
	}
	while(cin>>n,n){
		cout<<d1[n]<<' '<<d2[n]<<endl;
	}
}