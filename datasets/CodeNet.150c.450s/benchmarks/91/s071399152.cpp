#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[1000000]{};
	bool b[1000000]{};
	a[1]=0;
	int s=0;
	for(int c=2;c<1000000;c++){
		if(b[c]==false){
			s++;
			for(int d=c*2;d<1000000;d+=c)b[d]=true;
		}
		a[c]=s;
	}
	int k;
	while(cin>>k){
	printf("%d\n",a[k]);	
	}}