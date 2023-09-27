#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	
	int x,y;
	int W,H,r;
	
	cin>>W>>H>>x>>y>>r;
	
	if(W<x||H<y||W<x+r||H<y+r||x<0||y<0||x-r<0||y-r<0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;
	
}