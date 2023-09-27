#include<iostream>
using namespace std;
int main() {
	int n,a,b,c,d;
	for(int i=0;i<5;i++){
		c=0;
		d=0;
		cin>>n;
		if(n==0){
			break;
		}
		for(int y=0;y<n;y++){
			cin>>a>>b;
			if(a>b){
				c=c+a+b;
			}else if(b>a){
				d=d+a+b;
			}else{
				c=c+a;
				d=d+b;
			}
		}
		cout<<c<<" "<<d<<endl;
	}
return 0;
}
