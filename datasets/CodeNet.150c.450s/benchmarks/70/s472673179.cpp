#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)

int m,d;
int mon[13] ={0,0,31,60,91,121,152,182,213,244,274,305,335};

int main(){
	
	while(cin>>m>>d,!(m==0&&d==0)){
		
		d+=mon[m];
		d = d%7;
		if(d==0) cout<<"Wednesday\n";
		if(d==1) cout<<"Thursday\n";
		if(d==2) cout<<"Friday\n";
		if(d==3) cout<<"Saturday\n";
		if(d==4) cout<<"Sunday\n";
		if(d==5) cout<<"Monday\n";
		if(d==6) cout<<"Tuesday\n";
	}
	return 0;
	
}