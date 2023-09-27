#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
	int m=100000,n;
	cin>>n;
	for(int i=0;i<n;i++){
		m=m/20*21;
		m+=(1000-(m-1)%1000)-1;
	}
	cout<<m<<endl;
	return 0;
}

