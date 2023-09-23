#include <iostream>
using namespace std;
int main(){
	int a,h,m,s,l,o,p;
	cin>>a;
	l=a%3600;
	h=(a-l)/3600;
	o=l%60;
	m=(l-o)/60;
	s=a-h*3600-m*60;
	cout<<h<<":"<<m<<":"<<s<<endl;
}
