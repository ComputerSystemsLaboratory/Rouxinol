#include<iostream>
using namespace std;
int main(){
	int a,sum[2]={0};
	for(int i=0;i<4;i++){
		cin>>a;
		sum[0]+=a;
	}
	for(int i=0;i<4;i++){
		cin>>a;
		sum[1]+=a;
	}
	cout<<(sum[0]<sum[1]?sum[1]:sum[0])<<endl;
	return 0;
}