#include<iostream>
using namespace std;

int calc(int y,int m,int d){
	y--;m--;d--;
	int res=0;
	res += y/3*(5*(19+20)*2+10*20);
	res += y%3*5*(19+20);
	if((y+1)%3==0){
		res += m*20;
	}else{
		res += m/2*(19+20);
		res += m%2*20;
	}
	res += d;
	return res;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int y,m,d,ans=0;
		cin>>y>>m>>d;
		cout<<calc(1000,1,1)-calc(y,m,d)<<endl;
	}
	return 0;
}