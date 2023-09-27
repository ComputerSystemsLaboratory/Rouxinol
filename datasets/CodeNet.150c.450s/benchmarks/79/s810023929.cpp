#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

	int n,r,c,p,ar[50];
	while(cin>>n>>r){
		if(n==0 && r==0) return 0;
		for(int i=0; i<n; i++) ar[i]=n-i;
		for(int i=0; i<r; i++){
			cin>>p>>c;
			int t1[50],t2[50];
			for(int i=0; i<p-1; i++){
				t1[i] = ar[i];
			}
			for(int i=p-1; i<p+c-1; i++){
				t2[i-p+1] = ar[i];
			}
			for(int i=0; i<c; i++){
				ar[i]=t2[i];
			}
			for(int i=c; i<p+c-1; i++){
				ar[i]=t1[i-c];
			}
		}
		cout<<ar[0]<<endl;
	}

	return 0;
}