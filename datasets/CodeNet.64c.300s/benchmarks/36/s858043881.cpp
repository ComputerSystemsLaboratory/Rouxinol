#include<iostream>

using namespace std;

int main(){
	int a[3],i,j,n;
	for(i=0;i<3;i++){
		cin>>a[i];
	}
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(a[i]>a[j]){
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	return 0;
}