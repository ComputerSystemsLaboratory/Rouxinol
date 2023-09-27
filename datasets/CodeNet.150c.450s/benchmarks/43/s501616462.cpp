#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define pi 3.141592653589793283462
int main(){
	int n;
	int ca=0;
	int cb=0;
	int ia,ib;
	while(1){
		cin>>n;
		if(n==0)
			break;
		for(int i=0;i<n;i++){
		cin>>ia>>ib;
		if(ia>ib)
			ca+=(ia+ib);
		else if(ia<ib)
			cb+=(ia+ib);
		else{
			ca+=ia;
			cb+=ib;
		}
	}
		cout<<ca<<" "<<cb<<endl;
		ca=0;
		cb=0;
   }
	return 0;
}