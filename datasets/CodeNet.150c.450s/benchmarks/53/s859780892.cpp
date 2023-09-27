#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){

	long long int N,x=2;
	
	cin>>N;
	cout<<N<<":";
	while(1){//cout<<"#"<<x<<endl;
	
		if(x*x>N)break;
		if(N%x==0){
			cout<<" "<<x;
			N=N/x;
			x=0;

		}
		
		
		x+=2;
		if(x!=2&&x%2==0)x--;
		
	}
	
	if(N!=1)cout<<" "<<N;
	cout<<endl;

		return 0;
}