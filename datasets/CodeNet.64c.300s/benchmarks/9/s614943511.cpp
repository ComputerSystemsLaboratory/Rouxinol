#include<iostream>
using namespace std;
int main(){
	int a,n,i,b,j,ans=0,x=0,c;
	a=100000;
	cin>>n;
	for(i=1;i<=n;i++){
		a=a*1.05;
		b=a%1000;
		if(b==0){
		}else{
			for(x=1;x<=999;x++){
				a=a-1;
				c=a%1000;
				if(c==0)break;
			}
			a=a+1000;
		}
	}
	cout<<a<<endl;
	return 0;
}