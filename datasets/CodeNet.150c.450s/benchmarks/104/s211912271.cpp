#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int w,wl[35],n,a,b,c;
	char ch;
	for(int i=0;i<35;i++){
		wl[i]=i;
	}
	cin>>w;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>ch;
		cin>>b;
		c=wl[a];
		wl[a]=wl[b];
		wl[b]=c;
	}
	for(int i=0;i<w;i++){
		cout<<wl[i+1]<<endl;
	}
}