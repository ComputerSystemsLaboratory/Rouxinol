#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		if(i%3==0){
			cout <<" "<<i;
		}else if(i%10==3){
			cout <<" "<<i;
		}else if((i/10)%10==3){
			cout <<" "<<i;
		}else if((i/100)%10==3){
			cout<<" "<<i;
		}else if((i/1000)%10==3){
			cout <<" "<<i;
		}
		if(i==a){
			cout <<"\n";
		}
	}
	return 0;
}