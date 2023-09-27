#include <iostream>
using namespace std;
int main(){
	int w,h,x,y,r;
	cin >> w >> h >> x >> y >>r;
	if(x>=r && x<=w-r && y>=r && y<=h-r && r<=w/2 && r<=h/2)  cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}