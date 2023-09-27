#include <bits/stdc++.h>
using namespace std;

int main() {
	int w,n;
	cin>>w;
	cin>>n;
	int a[n];
	int b[n];
	char s[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>s[i]>>b[i];
	}
	int x[n+1];
	for(int i=1;i<=w;i++){
		x[i]=i;
		for(int j=0;j<n;j++){
			if(x[i]==a[j]){
				x[i]=b[j];
			}else if(x[i]==b[j]){
				x[i]=a[j];
			}
		}
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=w;j++){
			if(x[j]==i){
				cout<<j<<endl;
			}
		}
	}
	return 0;
}