#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int n,a[55];

int main() {
	cin>>n;
	a[0]=a[1]=1;
	for (int i=2;i<=n;i++) a[i]=a[i-1]+a[i-2];
	cout<<a[n]<<'\n';
}
