#include<iostream>
using namespace std;

int ten(int n){
	while(1){
		if(n%10==3){
			return 1;
		}
	if(n/10==0) break;
		n/=10;
	}
	return 0;
}

int main(){
	int n,i;
	cin>>n;
	for(i=1; i<=n; i++){
		if(i%3==0){
			cout<<" "<<i;
		}
		if(i%3!=0 && ten(i)==1){
			cout<<" "<<i;
		}
	}
	cout<<"\n";
	return 0;
}
