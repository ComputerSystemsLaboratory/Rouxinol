#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int N;
	double a,b,c,X;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a>>b>>c;
		if(a>b){
			X=a;
			a=b;
			b=X;
		}
		if(a>c){
			X=a;
			a=c;
			c=X;
		}
		if(b>c){
			X=b;
			b=c;
			c=X;
		}
		if(sqrt(a*a+b*b)==c){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		//cout<<a<<b<<c;
	}
    return 0;
}