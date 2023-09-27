#include<iostream>
using namespace std;

void swap(int &x,int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int W,H,x,y,r;
	cin>>W>>H>>x>>y>>r;
	if(x<0 || y<0)
		cout<<"No"<<endl;
	else if(W-(x+r) >= 0 && H-(y+r) >= 0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	return 0;
}