#include<iostream>
using namespace std;

char GetGrade(int m,int f,int r){

	int s=m+f;
	char result;
	if(s>=80){result='A';}
	if (s<80&&s>=65){result='B';}
	if(s<65&&s>=50){result='C';}
	if(s<50&&s>=30){if(r>=50){result='C';}
			else{result='D';}}
	if(s<30){result='F';}
	if(m==-1||f==-1){result='F';}
	
	return result;

	}

int main(){

	int m,f,r;

	while(1){
		cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1){break;}
		cout<<GetGrade(m,f,r)<<"\n";
		}

	return 0;

	}