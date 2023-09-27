#include<iostream>
using namespace std;
int main(){
	int H=0,M=0,S=0,h=0,m=0,s=0;
	cin>>S;
	h=S/3600;
	if(h==0){
		h=0;
		}
	H=S%3600;
	m=H/60;
	if(m==0){
		m=0;
		}
	M=H%60;
	
	
	cout<<h<<":"<<m<<":"<<M<<endl;
	
	return 0;
}