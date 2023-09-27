#include <iostream>
#include <stdio.h>
using namespace std;

int f(int x,int y,int z){
	return x+y*y+z*z*z;
}
int main(void){
	int x,m,e;

	while(cin>>e,e){
		m=1000000;
		// x+yy+zzz=e????§£???.
		for(int y=0;y*y<=e;y++){
			for(int z=0;y*y+z*z*z<=e;z++){
				// if(y*y+z*z*z>e)goto lab;
				// printf("debug:%d\n",f(x,y,z));
				x=e-y*y-z*z*z;
				if(m>x+y+z)m=x+y+z;
			}
		}
lab:
		cout<<m<<endl;
	}
}