#include <bits/stdc++.h>
using namespace std;

int main() {
	while(true){
		int n,r;
		cin>>n>>r;
		if(n==0&&r==0) return 0;
		vector<int>v(n+5);
		for(int i=0;i<n;i++) v[i]=n-i;
		for(int i=0;i<r;i++){
			int p,c;
			cin>>p>>c;
			vector<int>u(p-1);
			vector<int>l(c);
			for(int i=0;i<p-1;i++) u[i]=v[i];
			for(int i=p-1;i<p-1+c;i++) l[i-(p-1)]=v[i];
			for(int i=0;i<c;i++) v[i]=l[i];
			for(int i=c;i<c+p-1;i++) v[i]=u[i-c];
		}
		cout<<v[0]<<endl;
	}
	return 0;
}
