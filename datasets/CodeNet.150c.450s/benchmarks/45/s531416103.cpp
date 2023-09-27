#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long power(int m,int n){
	long long res=1,mm=m;
	while(n){
		if(n & 1)res=(res*mm)%MOD;
		mm=(mm*mm)%MOD;
		n>>=1;
	}
	return res;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<power(m,n)<<endl;
}
