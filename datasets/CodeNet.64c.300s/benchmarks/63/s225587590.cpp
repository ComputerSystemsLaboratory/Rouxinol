#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
typedef long long int ll;

using namespace std;


int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}

int main(){
	while(1){
		ll a,b;
		if( !(cin>>a>>b) )break;
		ll g=gcd(a,b);
		cout<<g<<" "<<a*b/g<<endl;
	}
	return 0;
}