#include<iostream>
using namespace std;

int main(){
	int i,j,x[10000],y[10000];
	for(i=0;i<10000;i++){
		cin>>x[i]>>y[i];
		
		if(x[i]==0&&y[i]==0)break;
	}
	for(j=0;j<i;j++){
		if(x[j]>y[j]){
			x[j]=x[j]+y[j];
			y[j]=x[j]-y[j];
			x[j]=x[j]-y[j];
		}
		cout<<x[j]<<' '<<y[j]<<endl;
	}
	return 0;
}