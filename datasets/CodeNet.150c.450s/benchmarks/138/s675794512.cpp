#include "bits/stdc++.h"
using namespace std;

int main() {
int n,m,a,b;
cin>>n>>m;
if(n<m){swap(n,m);}
while(m>0){
	a=n%m;
	n=m;
	m=a;
}
cout<<n<<endl;
}