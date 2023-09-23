#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

bool check(int W,int H,int x,int y,int r){
	if(x<=0||y<=0)return 0;
	if(x-r<0||y-r<0)return 0;
	if(x+r>W||y+r>H)return 0;
	return 1;
}

int main(){
int w,h,x,y,r;
cin>>w>>h>>x>>y>>r;
if(check(w,h,x,y,r))cout<<"Yes"<<endl;
else cout<<"No"<<endl;


return 0;
}