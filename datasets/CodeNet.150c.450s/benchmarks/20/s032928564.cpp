#include<iostream>
using namespace std;
int main(){
	int S;
	cin>>S;
	int h,m,s,A;
	h=S/3600;
	A=S%3600;
	m=A/60;
	s=A%60;
	cout<<h<<":"<<m<<":"<<s<<endl;

}