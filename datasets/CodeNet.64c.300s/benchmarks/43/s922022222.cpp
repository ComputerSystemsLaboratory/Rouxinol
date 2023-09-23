#include<iostream>
using namespace std;
int main(){
	int sum1=0,a;
	int sum2=0,b;
	int i;
	for(i=0;i<4;i++){
		cin>>a;
		sum1+=a;
	}
	for(i=0;i<4;i++){
		cin>>b;
		sum2+=b;
	}
	if(sum1>sum2){
		cout<<sum1<<endl;
	}
	else if(sum1<sum2){
		cout<<sum2<<endl;
	}
	else{
		cout<<sum1<<endl;
	}
	return 0;
}