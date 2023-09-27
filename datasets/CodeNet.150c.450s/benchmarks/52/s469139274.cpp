#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a[10],i=0,n;
	while(scanf("%d",&n)==1){
		if(n!=0){
			a[i]=n;
			i++;
		}
		else{
			i--;
			cout<<a[i]<<endl;
		}
	}
	return 0;
}