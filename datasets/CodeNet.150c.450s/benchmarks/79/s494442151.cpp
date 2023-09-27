#include<iostream>
using namespace std;
int main(){
	int n,r,d[55],cp[55],p,c;
	while(cin>>n>>r){
		if(n==0 && r==0)break;
		for(int i=1;i<=n;i++){
			d[i]=n-i+1;
		}
		for(int i=0;i<r;i++){
			cin>>p>>c;
			for(int j=1;j<=p-1;j++){
				cp[j]=d[j];
			}
			for(int j=1;j<=c;j++){
				d[j]=d[p+j-1];
			}
			for(int j=1;j<=p-1;j++){
				d[c+j]=cp[j];
			}
		}
		cout<<d[1]<<endl;

	}
	return 0;
}