#include <iostream>
using namespace std;

int a[20],n;

bool f(int i,int m){
	if(m==0)
		return true;
	if(i==n)
		return false;
	bool ret=f(i+1,m)||f(i+1,m-a[i]);
	return ret;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int m;
		cin>>m;
		if(f(0,m))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}