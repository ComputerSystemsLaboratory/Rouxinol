#include<iostream>
using namespace std;
int main(){
	int a[1000000]={0,0,1,2},n,k=0,count=2;
	for(int i=4;i<1000000;i++){
		for(int j=2;j*j<=i;j++){
			if(i%j==0){k++;break;}
		}
		if(k==0)count++;
		a[i]=count;
		k=0;
	}
	while(cin>>n)cout<<a[n]<<endl;
	return 0;
}