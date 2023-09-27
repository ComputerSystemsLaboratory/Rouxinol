#include<iostream>

using namespace std;

int main()
{
	int a[5],j;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	
	for(int i=1;i<5;i++){
		if(a[0]<a[i]){
			j=a[0];
			a[0]=a[i];
			a[i]=j;
		}
	}
	for(int k=2;k<5;k++){
		if(a[1]<a[k]){
			j=a[1];
			a[1]=a[k];
			a[k]=j;
		}
	}
	for(int l=3;l<5;l++){
		if(a[2]<a[l]){
			j=a[2];
			a[2]=a[l];
			a[l]=j;
		}
	}
	if(a[3]<a[4]){
		j=a[3];
		a[3]=a[4];
		a[4]=j;
	}
	
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
		
	return 0;
}           