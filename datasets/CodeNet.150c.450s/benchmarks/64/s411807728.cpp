#include<iostream>
#include<cstring>
using namespace std;

bool x[5000000];

int main(){
	memset(x,false,sizeof(x));
	int n,q,y[20],z[5000],power[21],a[20],sum;
	power[0]=1;
	for(int i=1;i<=20;i++){
		power[i]=power[i-1]*2;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y[i];
	}
	for(int i=0;i<power[n];i++){
		sum=0;
		for(int j=0;j<n;j++){
			a[j]=(i/power[j])%2;
			if(a[j]==1){
				sum += y[j];
			}
		}
		x[sum]=true;
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>z[i];
		if(x[z[i]]==true){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}