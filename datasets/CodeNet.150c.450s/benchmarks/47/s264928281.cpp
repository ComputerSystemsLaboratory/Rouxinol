#include<iostream>
#include<algorithm>
int w,h,x,y,r;
bool func(int x,int y){
	if(0<=x && x<=w && 0<=y && y<=h){
	return true;
	}else return false;
}
int main(){
	std::cin>>w>>h>>x>>y>>r;
	
	if(func(x,y) && func(x+r,y) && func(x+r,y+r) && func(x,y+r) && func(x-r,y+r) && func(x-r,y) && func(x-r,y-r) && func(x,y-r) && func(x+r,y-r)){
		std::cout<<"Yes"<<std::endl;
	}else std::cout<<"No"<<std::endl;
	return 0;
}