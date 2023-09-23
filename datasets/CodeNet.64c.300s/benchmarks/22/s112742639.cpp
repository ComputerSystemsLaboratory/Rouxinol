#include<iostream>
using namespace std;
int main(void){
	int N,a,b,c,tmp;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>a>>b>>c;
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		if(b>c){
			tmp=b;
			b=c;
			c=tmp;
		}
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		if(((a*a)+(b*b))==(c*c)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}