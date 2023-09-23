#include <bits/stdc++.h>
using namespace std;

int a,b;

int main() {
	while (1) {
		cin>>a>>b;
		if (!a && !b) return 0;
		if (a>b) swap(a,b);
		cout<<a<<' '<<b<<'\n';
	}
}
