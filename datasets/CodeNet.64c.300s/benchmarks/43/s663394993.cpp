#include<iostream>
using namespace std;

int main(){
	int s=0,t=0, i, a;
	for(i=0;i<4;i++){
		cin>>a;
		s+=a;
	}
	for(i=0;i<4;i++){
		cin>>a;
		t+=a;
	}
	if(s<t)cout<<t<<endl;
	else cout<<s<<endl;
	return 0;
}