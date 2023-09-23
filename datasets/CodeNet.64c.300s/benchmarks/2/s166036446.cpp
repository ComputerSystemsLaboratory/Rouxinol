#include<iostream>
using namespace std;
int main(){
	int m,f,r;char s;
	while(true){
	cin>>m>>f>>r;
	if(m==-1&&f==-1&&r==-1)break;
	if(m==-1||f==-1)s='F';
	else if(m+f>=80)s='A';
	else if(m+f>=65)s='B';
	else if(m+f>=50||m+f>=30&&r>=50)s='C';
	else if(m+f>=30)s='D';
	else s='F';
	cout<<s<<endl;
	}

 return 0;
}