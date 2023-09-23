#include <iostream>
using namespace std;
int a(){
	int a=0,x;
	for(int i=0;i<4;i++){
		cin>>x;
		a+=x;
	}
	return a;
}
int main(){
	cout<<max(a(),a())<<endl;
}