#include "bits/stdc++.h"
using namespace std;

int isprime(int m){
if (m<2) {return 0;}
if(m==2)return 1;
if(m%2==0)return 0;
for (int i =3 ; i*i <= m; i=i+2) {
	if(m%i==0){return 0;}
}
return 1;
}


int main() {
int n,m,l,ans=0;
	cin>>n;
	for (int i = 0; i < n; ++i) {
	cin>>m;
	if(isprime(m)){ans+=1;}
}
cout<<ans<<endl;
}