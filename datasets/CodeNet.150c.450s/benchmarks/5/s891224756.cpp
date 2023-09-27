#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int n,a[105];

int main() {
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=n-1;i>=0;i--) if (i==n-1) cout<<a[i];
	else cout<<' '<<a[i];
	cout<<'\n';
}
