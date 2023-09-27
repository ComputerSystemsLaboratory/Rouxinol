#include <iostream>
#include <string>
using namespace std;
int main(){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	bool a=false;
	if(0<=x-r&&0<=y-r&&x<=w-r&&y<=h-r)
		a=true;
	if(a==true)
		cout<<"Yes"<<endl;
	if(a==false)
		cout<<"No"<<endl;
	return 0;
}