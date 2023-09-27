#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	if(a>b) cout<<"a > b"<<endl;
	if(a<b) cout<<"a < b"<<endl;
	if(a==b) cout<<"a == b"<<endl;
	return 0;
}