#include<iostream>
using namespace std;

int main(){
	int w, h, x, y, r;
	cin>>w>>h>>x>>y>>r;
	if(0<=x-r && x+r<=w && 0<=y-r && y+r<=h){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	return 0;
}