#include<iostream>
using namespace std;

int main(){
	int n=0;
	while(cin>>n){
		if(n!=0){
			int a=0,b=0;
			while(n-->0){
				int x=0,y=0;
				cin>>x>>y;
				if(x>y){
					a+=x+y;
				}
				if(x==y){
					a+=x;
					b+=y;
				}
				if(x<y){
					b+=x+y;
				}
			}
			cout<<a<<' '<<b<<endl;
		}
	}
	return 0;
}