#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(void)
{
	int x=0,y=0,work=0,answer=1,first=1;
	cin>>x;
	cin>>y;
	if(x<=y){
		work=x;
		x=y;
		y=work;
	}
	while(1){
		first=x%y;
		if(first==0){
			answer=y;
			break;
		}
		x=y;
		y=first;		
	}
	cout<<answer<<endl;
	return (0);
}
