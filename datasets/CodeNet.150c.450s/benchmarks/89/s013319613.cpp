#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	char p[1000000];
	for(int i=2;i<1000000;i++)p[i]=1;
	for(int i=2;i<1000;i++){
		if(p[i]==0)continue;
		for(int j=i+1;j<1000000;j++){
			if(p[j]==0)continue;
			if(j%i==0)p[j]=0;
		}
	}
	
	int a,d,n;
	while(1){
		cin>>a>>d>>n;
		if(a==0)return 0;
		int m=-1;
		for(int i=0;i<n;i++){
			while(1){
				m++;
				if(p[a+m*d]==1)break;
			}
		}
		cout<<a+m*d<<endl;
	}
}