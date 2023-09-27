#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++)
		cin>>a[i];
	for(int i=0;i<4;i++){
      for(int j=4;j>i;j--){
	  if(a[j]>a[j-1]){
	      int tmp=a[j];
	      a[j]=a[j-1];
	      a[j-1]=tmp;
	   }
       }
   }
	for(int i=0;i<4;i++)
		cout<<a[i]<<" ";
	cout<<a[4]<<endl;
	return 0;
}