#include<iostream>
#include <string.h>
using namespace std;

int main(){
 int i,n,sum=100000;
 cin>>n;
 for(i=0;i<n;i++){
	 sum *=1.05;
	 //cout<<sum<<endl;
	 if((sum%1000)>0){
		sum=sum-sum%1000;
		sum+=1000;
	 }
 }
 cout<<sum<<endl;
}