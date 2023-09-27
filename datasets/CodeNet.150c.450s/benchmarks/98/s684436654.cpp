#include <bits/stdc++.h>
using namespace std;
int t[105],h[105];

int main(){
	int n,m;
	while(1){
		int tt=0,th=0,mint=200,minh=200;
		cin>>n>>m;
		if(n==0&&m==0) break;
		for(int i=0;i<n;i++){
			cin>>t[i];
			tt+=t[i];
		}
		for(int i=0;i<m;i++){
			cin>>h[i];
			th+=h[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(tt-t[i]+h[j]==th-h[j]+t[i]){
					if(mint+minh>t[i]+h[j]){
						mint=t[i];
						minh=h[j];
					}
				}
			}
		}
		if(mint==200&&minh==200) cout<<-1<<endl;
		else cout<<mint<<" "<<minh<<endl;
	}
	return 0;
}
