#include <iostream>
using namespace std;

int main(){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(r<=x&&x<=w-r && r<=y&&y<=h-r)
		cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
