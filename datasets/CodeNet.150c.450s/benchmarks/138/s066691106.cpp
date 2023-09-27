#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x,y,amari=1,a,ans;
	cin>>x>>y;
	a=min(x,y);
	x=max(x,y);
	y=a;
	while(amari){
		amari=x%y;
		x=y;
		y=amari;
	}
	cout<<x<<endl;
	return 0;
}