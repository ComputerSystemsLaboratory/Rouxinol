#include <bits/stdc++.h>
using namespace std;

int a[3];

int main() {
	for (int i=0;i<3;i++) cin>>a[i];
	sort(a,a+3);
	for (int i=0;i<3;i++) if (!i) cout<<a[i];
	else cout<<' '<<a[i];
	cout<<'\n';
}
