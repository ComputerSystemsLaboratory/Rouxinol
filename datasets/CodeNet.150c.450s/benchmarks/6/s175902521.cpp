#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b && b<c){ cout<<"Yes"<<endl;}
	else{cout<<"No"<<endl;}
	return 0;
}