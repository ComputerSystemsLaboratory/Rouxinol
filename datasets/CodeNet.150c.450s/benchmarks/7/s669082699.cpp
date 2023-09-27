#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,n;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
	cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl;
return 0;
}