#include<iostream>
using namespace std;
int main(){
	int a=0;
	int w=0; //????????¢??????
	int h=0; //????????¢????¨?
	int x=0; //????±???¨????????????????????§?¨????w-x???h-y????????????
	int y=0;
	int r=0; //????±???¨??????????????????
	cin>>w>>h>>x>>y>>r;
	if(x-r>=0&&x+r<=w){
		if(y-r>=0&&y+r<=h){
			cout<<"Yes"<<endl;
		}else{
			a=1;
		}
	}else{
		a=1;
	}
	if(a==1){
		cout<<"No"<<endl;
	}
}