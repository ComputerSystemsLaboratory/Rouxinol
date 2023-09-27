#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	for(int i=0;i<2;i++){
      for(int j=2;j>i;j--){
	  if(a[j]<a[j-1]){
	      int tmp=a[j];
	      a[j]=a[j-1];
	      a[j-1]=tmp;
	   }
       }
   }
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	return 0;
}