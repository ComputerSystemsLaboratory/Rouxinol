#include <bits/stdc++.h>
using namespace std;

long long b,p,m=1000000007,rt=1;

int main() {
	cin>>b>>p;
	for (;p;p>>=1,b=b*b%m) if (p&1) rt=rt*b%m;
	cout<<rt<<'\n';
}
