#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,r;
	while(cin>>n>>r){
		if(n==0 && r==0){
			break;
		}
		int d[100],cp[100];
		for(int i=1;i<=n;i++){
			d[i]=n-i+1;
			cp[i]=n-i+1;
		}
		int p,c;
		for(int i=0;i<r;i++){
			cin>>p>>c;
		for(int i=0;i<c;i++){
			cp[i+1]=d[p+i];
		}
		for(int i=0;i<p-1;i++){
			cp[c+1+i]=d[i+1];
		}
		for(int i=0;i<=100;i++){
			d[i]=cp[i];
		}
		}
		cout<<d[1]<<endl;
	}
	return 0;
}