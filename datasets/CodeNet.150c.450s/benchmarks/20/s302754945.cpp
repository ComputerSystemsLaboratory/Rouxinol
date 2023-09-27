#include<iostream>
using namespace std;


int main(){
	int s;
	cin>>s;
	int a=s;
	s=s%60%60;
	int m=a/60%60;
	int h=a/3600;
	cout<<h<<':'<<m<<":"<<s<<endl;
}
