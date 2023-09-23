#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
typedef unsigned long long l;
l p(l x,l n){
	if(!n)return 1;
	l r=p(x*x%M,n/2);
	if(n%2)r=r*x%M;
	return r;
}
int main(){
	l a,b;cin>>a>>b;cout<<p(a,b)<<endl;
}