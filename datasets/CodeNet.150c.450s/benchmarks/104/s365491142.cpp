#include "bits/stdc++.h"
using namespace std;

int main(){
	int w;
	int n;
	cin>>w>>n;
	vector<int> x(w);
	for(int i=0;i<w;i++)x[i]=i+1;

	for(int i=0;i<n;i++){
		int a,b;
		(cin>>a).ignore()>>b;
		a--;
		b--;
		int tmp=x[a];
		x[a]=x[b];
		x[b]=tmp;
	}
	for(int i=0;i<w;i++)cout<<x[i]<<endl;
	return 0;
}