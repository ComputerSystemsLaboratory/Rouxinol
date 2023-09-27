#include<iostream>
using namespace std;
int main(void){
	int w,h,x,y,r;
	cin>>w>>h>>x>>y>>r;
	if(w>=x+r&&h>=y+r&&x>0&&y>0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
	return 0;
}