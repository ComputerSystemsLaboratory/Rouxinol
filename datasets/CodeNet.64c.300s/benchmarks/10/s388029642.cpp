#include<iostream>
using namespace std;

int main(){
	int x,y;
	while(1){
		cin>>x>>y;
	if(x<y){
		cout<<x<<" "<<y<<endl;
		}
	else if(x>y){
		cout<<y<<" "<<x<<endl;
		}
	else if(x==y&&x!=0)	{
		cout<<x<<" "<<y<<endl;
	}
	else if(x==0&&y==0)
		{break;}
	}
	return 0;
}