#include <bits/stdc++.h>
#define rep(i,l,n) for(i=l;i<n;i++)
using namespace std;

int main(){
	int data[15]={},i=0,n;

	while(scanf("%d",&n)!=EOF){
		if(n!=0){
			data[i]=n;
			i++;
		}else if(n==0){
			cout<<data[i-1]<<endl;
			i--;
		}
	}
}