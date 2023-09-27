#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,time;
	cin>>time;
	for(int abc=0;abc<time;abc++){
		cin>>a>>b>>c;
		if(a>b){
			d=a;
			a=b;
			b=d;
		}
			if(b>c){
			d=b;
			b=c;
			c=d;
		}
		if(a>b){
			d=a;
			a=b;
			b=d;
		}
		if(a*a+b*b==c*c){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}