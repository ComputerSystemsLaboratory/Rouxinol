#include<iostream>
using namespace std;
int main(){
	int x,y,n;
	while(cin>>x>>y){
		if(x==0&&y==0){
			break;
			}
	if(x>y){
		n=x;
		x=y;
		y=n;
		}
	cout<<x<<" "<<y<<endl;
	}
	}