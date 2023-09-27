#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int m[1000],n=0,M=0,N=0,w,I,J,j;
	string r[1000],s;
	while(cin>>s){
		w=0;
		if(s.size()>M){M=s.size();I=n;}
		for(int i=0;i<n;i++)if(s==r[i]){m[i]++;w=1;j=i;break;}
		if(w==0){r[n]=s;m[n]=1;j=n;n++;}
		if(m[j]>N){N=m[j];J=j;}
	}
	cout<<r[J]<<" "<<r[I]<<endl;
}