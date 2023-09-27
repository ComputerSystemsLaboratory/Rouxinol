#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,a,b,c,d;
	while(true){
	cin>>n;
	c=0,d=0;
	if(n==0)
		break;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b)
			c+=a+b;
		if(a<b)
			d+=a+b;
		if(a==b){
			c+=a;
			d+=b;
		}
	}
	cout<<c<<" "<<d<<endl;
	}
    return 0;
}
 