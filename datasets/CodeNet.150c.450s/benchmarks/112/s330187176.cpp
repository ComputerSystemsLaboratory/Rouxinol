#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cstdio>
using namespace std;
string a[100],b[100],c[100000];
int n,i,m;
string henkan(){
	for(int j=0;j<n;j++){
		if(c[i]==a[j]){
			c[i]=b[j];
			break;
		}
	}
	return c[i];
}
int main(){
	while(cin>>n){
		if(n==0)break;
		for(i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		cin>>m;
		for(i=0;i<m;i++){
			cin>>c[i];
			c[i]=henkan();
		}
		for(i=0;i<m;i++){
			cout<<c[i];
		}
		cout<<endl;
	}
	return 0;
}