#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define pi 3.141592653589793283462
int main(){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(x>=r && x<=w-r){
	    if(y>=r && y<=h-r)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else
		cout<<"No"<<endl;
	return 0;
}