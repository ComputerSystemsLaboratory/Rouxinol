#include<iostream>
using namespace std;
int main(){
	int n,r;
	char a[1000],b[1000],x,y;
	while(cin>>n,n){
		for(int i=0;i<n;i++){
			cin>>x>>y;
			a[i]=x;
			b[i]=y;
		}
		cin>>r;
		for(int i=0;i<r;i++){
			cin>>x;
			int j;
			for(j=0;j<n;j++)
			if(a[j]==x){
				cout<<b[j];
				break;
			}
			if(j==n)
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
}