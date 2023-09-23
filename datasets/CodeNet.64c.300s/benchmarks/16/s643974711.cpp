#include<iostream>
#include<algorithm>
using namespace std;

int n,A=-(1<<31),I=(1<<31),d;

int main(){
	cin>>n>>I;
	for(int i=1;i<n;i++){
		cin>>d;
		A=max(A,d-I);
		I=min(I,d);
	}
	cout<<A<<endl;
	return 0;
}