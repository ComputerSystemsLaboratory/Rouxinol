#include<iostream>
#include<string>
using namespace std;
int main(){
	int w,n;
	int d[100],e[100];
	int a[100];
	char c;
	cin>>w>>n;
	for(int i=0;i<n;i++)
		cin>>d[i]>>c>>e[i];
	for(int i=1;i<=w;i++)
		a[i]=i;
	for(int j=0;j<n;j++){
		int tmp=a[d[j]];
		a[d[j]]=a[e[j]];
		a[e[j]]=tmp;
	}
	for(int i=1;i<=w;i++)
		cout<<a[i]<<endl;
	return 0;
}