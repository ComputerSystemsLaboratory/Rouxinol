#include<iostream>
using namespace std;
int main(){
	int a[2];
	while(cin>>a[0]>>a[1]){
	int sum=a[0]+a[1];
	int  i=0;
	while(1){
		i++;
	if(sum>=0&&9>=sum)break;
	sum/=10;
	}
	cout<< i<<endl;
	}
	return 0;
}