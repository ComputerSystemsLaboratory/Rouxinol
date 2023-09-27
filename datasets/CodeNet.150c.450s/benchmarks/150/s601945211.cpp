#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int n,a[2000001],b[2000001],c[10001];

void sort() {
	for(int i=0;i<=10000;i++)c[i]=0;
	for(int j=1;j<=n;j++)c[a[j]]++;
	for(int i=1;i<=10000;i++)c[i]+=c[i-1];
	for(int j=n;j>0;j--){b[c[a[j]]]=a[j];c[a[j]]--;}
}

int main(void) {
	cin>>n;for(int i=1;i<=n;i++)cin>>a[i];
	sort();
	for(int i=1;i<n;i++)cout<<b[i]<<" ";
	cout<<b[n]<<endl;
}

