#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int n,b,ib,p[50],q;
	while(1){
		cin>>n>>b;ib=b;
		if(n==0&&b==0)return 0;
		for(int i=0;i<n;i++)p[i]=0;
		q=0;
		while(1){
			if(b>0){p[q]++;b--;if(p[q]==ib){cout<<q<<endl;break;}}
			else {b+=p[q];p[q]=0;}
			q++;if(q==n)q=0;
		}
	}
}