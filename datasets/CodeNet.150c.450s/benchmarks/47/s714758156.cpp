#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(w>=x+r&&0<=x-r&&h>=y+r&&0<=y-r)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

