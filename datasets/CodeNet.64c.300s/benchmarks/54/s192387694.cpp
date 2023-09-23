#include<iostream>
using namespace std;

long long int a[21];
long long int b[21];
int main(){
	int i=0;
	int j=0;
	int n=0;
	int k=0;
	cin>>n;
	for(i=0;i<22;i++){
		a[i]=0;
		b[i]=0;
	}
	cin>>k;
	a[k]=1;
	for(i=0;i<n-2;i++){
		cin>>k;
		for(j=0;j<22;j++){
			 if(j-k<0){
			 	b[j]=a[j+k];
			 }
			 if(j+k>20){
		 		b[j]=a[j-k];
			 }
			 if(j-k>=0 && j+k<=20){
			 	b[j]=a[j-k]+a[j+k];
			 }
		}
		for(j=0;j<22;j++){
			a[j]=b[j];
		}
	}
	cin>>k;
	cout<<a[k]<<endl;
} 