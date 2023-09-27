#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	int x,y;
	while(cin>>n&&n){
		x=y=0;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			if(a>b)x+=a+b;
			else if(a<b)y+=a+b;
			else{
				x+=a;
				y+=a;
			}
		}
		cout<<x<<' '<<y<<endl; 
	}
	return 0;
}