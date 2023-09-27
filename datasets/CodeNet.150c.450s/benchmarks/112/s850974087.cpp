#include<iostream>
using namespace std;
char v[256];int n,m;
int main(){
	while(true){
		cin>>n;for(int i=32;i<127;i++){v[i]=i;}
		if(n==0)break;
		for(int i=0;i<n;i++){char p,q;cin>>p>>q;v[p]=q;}
		cin>>m;
		for(int i=0;i<m;i++){
			char f;cin>>f;cout<<v[f];
		}
		cout<<endl;
	}
	return 0;
}