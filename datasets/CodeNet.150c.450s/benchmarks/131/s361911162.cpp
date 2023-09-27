#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,a[10],w[31];
	while(cin>>n>>m,(n||m)){
		int c=0,u,r;
		while(1){
			for(w[c]=n,i=0;i<c;i++){
				if(w[i]==n){cout<<i<<' '<<w[i]<<' '<<c-i<<endl;goto L;}
			}
		for(i=0;i<m;n/=10,i++)a[i]=n%10;
		sort(a,a+m);
		for(u=r=i=0,c++;i<m;){
			u*=10;
			r*=10;
			r+=a[m-i-1];
			u+=a[i++];
		}n=r-u;}L:;
	}
}