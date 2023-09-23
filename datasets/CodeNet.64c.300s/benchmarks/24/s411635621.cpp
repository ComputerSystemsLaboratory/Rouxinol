#include<iostream>
using namespace std;
int main(){
	int a,b,n,ansa=0,ansb=0;

	for(;;){
		cin>>n;
		if(n==0)break;
		ansa=0;
		ansb=0;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			if(a>b){
				ansa=ansa+a+b;
			}
			else if(a<b){
				ansb=ansb+a+b;
			}
			else if(a==b){
				ansa=ansa+a;
				ansb=ansb+b;
			}
		}
		cout<<ansa<<" "<<ansb<<endl;
	}


	return 0;
}
