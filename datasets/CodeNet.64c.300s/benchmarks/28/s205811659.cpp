#include<bits/stdc++.h>
using namespace std;
int main(void){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(x-r<0){
		cout<<"No"<<endl;
	}
	else if(w<x+r){
		cout<<"No"<<endl;
	}
	else if(y-r<0){
		cout<<"No"<<endl;
	}
	else if(h<y+r){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}
	return 0;
}

