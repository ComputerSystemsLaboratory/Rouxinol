#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	long i,s=1;
	for(i=1;i<=n;i=i+1){
		s=s*i;
	}
	cout<<s<<endl;
}