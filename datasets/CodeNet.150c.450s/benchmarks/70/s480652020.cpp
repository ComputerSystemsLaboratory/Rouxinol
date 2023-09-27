#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

void print(int i){
	if(i==0)cout<<"Monday"<<endl;
	if(i==1)cout<<"Tuesday"<<endl;
	if(i==2)cout<<"Wednesday"<<endl;
	if(i==3)cout<<"Thursday"<<endl;
	if(i==4)cout<<"Friday"<<endl;
	if(i==5)cout<<"Saturday"<<endl;
	if(i==6)cout<<"Sunday"<<endl;
	return;
}

int main(){
	int m,d,num=3;
	int season[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(cin>>m>>d,m){
		num=3;
		rep(i,m-1)num+=season[i];
		num+=d-1;
		num%=7;
		print(num);
	}
	return 0;
}