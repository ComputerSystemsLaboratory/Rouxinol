#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
	for(int i=0;i<9;i++){
      for(int j=9;j>i;j--){
	    if(a[j]>a[j-1]){
	    int t=a[j];
	    a[j]=a[j-1];
	    a[j-1]=t;
	   }
      }
    }
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	return 0;
}