#include<iostream>
#include<cstdio>
using namespace std;

int main(void){

	int h,i,j,m,n;
	string ch,left,right;

while(1)
{
	cin >>ch;
if(ch == "-") break;
	cin >>m;
		for(i=0;i<m;i++){
			cin >>n;
		  	left = ch.substr(0,n);
			right =ch.substr(n,ch.size());
			ch = right + left;
			}
cout <<ch <<"\n";
 	}

return 0;
}