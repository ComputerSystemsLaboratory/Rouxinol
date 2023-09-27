#include<iostream>
#include<algorithm>
using namespace std;
int pnt[10000];
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		pnt[i]=i;
	}
	int x,y,z;
	for(int u=0;u<q;u++){
		cin>>z>>x>>y;
		if(!z){
			while(true){
				if(pnt[x]==x)break;
				x=pnt[x];
			}
			while(true){
				if(pnt[y]==y)break;
				y=pnt[y];
			}
			pnt[y]=x;
		}
		if(z){
			while(true){
				if(pnt[x]==x)break;
				x=pnt[x];
			}
			while(true){
				if(pnt[y]==y)break;
				y=pnt[y];
			}
			cout<<(x==y)<<endl;
		}
	}
	return 0;
}