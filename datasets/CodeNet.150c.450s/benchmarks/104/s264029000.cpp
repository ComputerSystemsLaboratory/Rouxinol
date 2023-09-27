#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int w,n;
	cin>>w>>n;
	int a[30],b[30],c[30];
	char d;
	for(int i=1;i<=w;i++){
		a[i]=i;
	}
	for(int i=1;i<=n;i++){
		cin>>b[i]>>d>>c[i];
	}
	for(int i=1;i<=n;i++){
		swap(a[b[i]],a[c[i]]);
	}
	for(int i=1;i<=w;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}				
