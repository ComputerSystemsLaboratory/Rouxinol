#include<iostream>
using namespace std;
int gcd(int,int);
int main(){
	int x,y;
	int c=0;
	cin>>x>>y;
	gcd(x,y);
	return 0;
}
int gcd(int x,int y){
	if(x==0||y==0)
		return 0;
	while(x!=y){
		if(x>y){
			x=x-y;
		}
		else{
			y=y-x;
		}
	}
	cout<<x<<endl;
	return x;
}