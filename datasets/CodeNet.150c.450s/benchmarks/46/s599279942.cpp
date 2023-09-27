#include<iostream>
using namespace std;
int main(){
	int n,a,b,x,c;
	for(c=0;;){
		cin>>n>>x;
		if(n+x==0)break;
		for(a=1;a<x/3;a++){
			for(b=a+1;b<x*2/3;b++){
				if(x-a-b>b&&x-a-b<=n)c++;
			}
		}
		cout<<c<<endl;c=0;
	}
	return 0;
}