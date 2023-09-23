#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
bool a[30];
int b;
int main(){
	rep(i,30)a[i]=false;
	rep(i,28){cin>>b;a[b-1]=true;}
	rep(i,30)if(!a[i])cout<<i+1<<endl;
	return 0;
}