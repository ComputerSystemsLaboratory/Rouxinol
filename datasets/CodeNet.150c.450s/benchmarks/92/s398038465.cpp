#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int get(int n){
	int ret=1;
	while(1){
		if(n/10 !=0){
			ret++;
			n/=10;
		}
		else return ret;
	}
}
int main(){
	while(1){
		int a,b;
		if( !(cin>>a>>b) )break;

		int sum=a+b;
		cout<<get(sum)<<endl;
	}
	return 0;
}