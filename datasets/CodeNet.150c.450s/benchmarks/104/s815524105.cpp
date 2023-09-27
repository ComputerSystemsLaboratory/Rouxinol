#include<iostream>
#include<string>
using namespace std;
int main(){
	int w,n,a[100],b,c;
	char z;
	cin>>w>>n;
	for(int i=0;i<w;i++)
		a[i]=i+1;
	for(int i=0;i<n;i++){
		cin>>b>>z>>c;
		int tmp=a[b-1];
		a[b-1]=a[c-1];
		a[c-1]=tmp;
	}
	for(int i=0;i<w;i++)
		cout<<a[i]<<endl;
	return 0;
}