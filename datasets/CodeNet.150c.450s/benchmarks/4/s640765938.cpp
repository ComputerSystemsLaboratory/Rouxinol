#include<iostream>
#include<string>
using namespace std;
int main(){
	int m,f,r;
	char a;
	while(true){
		a='F';
		cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1)
			break;
		if(m+f>=80)
			a='A';
		if(m+f>=65&&m+f<80)
			a='B';
		if(m+f>=50&&m+f<65)
			a='C';
		if(m+f>=30&&m+f<50){
			a='D';
			if(r>=50)
				a='C';
		}
		if(m==-1||f==-1)
			a='F';
		cout<<a<<endl;
	}
	return 0;
}