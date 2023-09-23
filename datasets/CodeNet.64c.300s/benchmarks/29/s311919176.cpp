#include<bits/stdc++.h>
#define INF 1e8;
using namespace std;

int main(){
	int a;
	while(cin>>a,a){
		int x=INF;
		int y=INF;
		int z=INF;
		
		for(int i=0;i*i*i<=a;i++){
			int d,e,f;
			int b=a;
			b-=(i*i*i);
			d=i;
			int c=sqrt(b);
			e=c;
			b-=(c*c);
			f=b;
			if(d+e+f<x+y+z){
				z=d;
				y=e;
				x=f;
				}
			}
			cout<<x+y+z<<endl;
		}
		return 0;
	}