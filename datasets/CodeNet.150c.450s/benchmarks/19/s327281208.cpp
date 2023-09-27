#include<iostream>
using namespace std;
int main(){
	int x,y;
	while(1){
		cin>>x>>y;
		if(x>y){
			x+=y;
			y=x-y;
			x=x-y;
			cout<<x<<' '<<y<<endl;
		}else if(x==0&&y==0){
			break;
		}else{
			cout<<x<<' '<<y<<endl;
		}
	}
		return 0;
}