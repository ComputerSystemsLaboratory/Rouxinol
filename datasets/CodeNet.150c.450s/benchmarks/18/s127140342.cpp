#include<iostream>

using namespace std;

int main(){
	
	int n,s=100000;
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=s*0.05;
	if(s%1000!=0)
		s=s-s%1000+1000;
	}
	cout<<s<<endl;
}