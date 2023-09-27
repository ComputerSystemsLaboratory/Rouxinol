#include<iostream>
using namespace std;
int main(){
	int m,a;
	cin>>m;
	cout<<m/3600<<":";
	m -= (m/3600)*3600;
	cout<<m/60<<":";
	cout<<m%60<<endl;
	return 0;
}