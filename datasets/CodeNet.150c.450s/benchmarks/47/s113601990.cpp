#include<iostream>
using namespace std;
int main(){
	int W,H,x,y,r;
	
	cin>>W>>H>>x>>y>>r;
	
	if(x+r<=W && y+r<=H && x-r>=0 && y-r>=0)
		cout<<"Yes\n";
	else if(x+r>W || y+r>H || x-r<0 || y-r<0)
		cout<<"No\n";
}