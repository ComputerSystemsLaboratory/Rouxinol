#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	int c[256],e[256],m,n=0,k=0;
	for(int i=0;i<10;i++){c[i]=0;e[i]=0;}
	
	while(cin>>m){
		if(m==0){e[k]=c[n-1];k++;c[n-1]=0;n--;}
		else {c[n]=m;n++;}
	}
	
	for(int i=0;i<k;i++)cout<<e[i]<<endl;
	
	return 0;
}