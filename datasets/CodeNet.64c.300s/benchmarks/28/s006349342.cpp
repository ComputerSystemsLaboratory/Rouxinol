#include<iostream>
using namespace std;

int main(){
		int  W,H,x,y,r;
		int flag1,flag2;
		flag1=0;flag2=0;
		cin>>W>>H>>x>>y>>r;
		if(x+r<=W&&x-r>=0)flag1=1;
		if(y+r<=H&&y-r>=0)flag2=1;
		if(flag1==1&&flag2==1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

		return 0;
}