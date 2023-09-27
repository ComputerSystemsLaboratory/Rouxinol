#include <bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		int n,r;	cin>>n>>r;
		if(n==0)	return 0;
		vector<int> a;
		for(int i=n;i>0;i--)	a.push_back(i);
		while(r--){
			int p,c;	cin>>p>>c;
			vector<int> b(n);
			for(int i=0;i<p-1;i++)	b[c+i]=a[i];
			for(int i=0;i<c;i++)	b[i]=a[p-1+i];
			for(int i=p+c-1;i<n;i++)	b[i]=a[i];
			a=b;
		}
		cout<<a[0]<<endl;
	}
}