#include <iostream>
using namespace std;

int a[2000000];

int main(){
	int n,c[10001]={};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[a[i]]++;
	}
	int j=0;
	for(int i=0;i<10001;i++){
		for(int k=0;k<c[i];k++)
			a[j++]=i;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<((i!=n-1)?' ':'\n');
	return 0;
}