#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	while(x!=y){
		if(x>y){
			x=x-y;
		}
		else if(y>x){
			y=y-x;
		}
	}
	cout<<x<<endl;
	return 0;
}