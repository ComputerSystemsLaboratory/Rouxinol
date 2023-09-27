#include<iostream>
using namespace std;

int main(){
	int x,y,t;
	while(1){
		cin>>x>>y;
		if(x==0&&y==0)break;
		if(x>y){
			t=y;
			y=x;
			x=t;
		}
			cout<<x<<' '<<y<<endl;
	}
	return 0;
}