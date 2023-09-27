#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int x[1000],y[1000];
int main(){
	int n,r,a,b;
	while(true){
		cin>>n>>r;
		if(n==0 && r==0){break;}
		for(int i=1;i<=n;i++){
			x[i]=n+1-i;
		}
		for(int i=0;i<r;i++){
			cin>>b>>a;
			for(int i=b;i<a+b;i++){
				y[i-b+1]=x[i];
			}
			for(int i=1;i<b;i++){
				y[i+a]=x[i];
			}
			for(int i=a+b;i<=n;i++){
				y[i]=x[i];
			}
			for(int i=1;i<=n;i++){
				x[i]=y[i];
			}
		}
		cout<<x[1]<<endl;
	}
}