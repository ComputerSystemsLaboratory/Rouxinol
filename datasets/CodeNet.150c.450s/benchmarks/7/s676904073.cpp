#include<iostream>
using namespace std;

int main(){
	int max1=0,max2=0,max3=0,x,t=0;
	for(int i=0;i<10;i++){
		cin >>x;
		if(x>=max3) max3 = x;
		if(max3>=max2) {t=max3;max3=max2;max2=t;}
		if(max2>=max1) {t=max2;max2=max1;max1=t;}
		}
	cout<<max1<<"\n"<<max2<<"\n"<<max3<<endl;
	return 0;
	}