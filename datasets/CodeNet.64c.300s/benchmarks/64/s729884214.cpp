#include<iostream>
using namespace std;
int main(){
	long long x,y,c;
	cin>>x>>y;
	if(x<y){
		c=y;
		y=x;
		x=c;
	}
	c=0;
	while(x!=0&&y!=0){
		if(c%2==0){
			x=x%y;
		}else{
			y=y%x;
		}
		++c;
	}
	cout<<x+y<<endl;
	return 0;
}