#include<iostream>
using namespace std;

int main(){
	int s=0,m=0,h=0;
	cin>>s;
	h=s/3600;
	s-=h*3600;
	m=s/60;
	s-=m*60;
	cout<<h<<':'<<m<<':'<<s<<'\n';
	return 0;
}