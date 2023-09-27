#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include<iomanip>
using namespace std;
#define L long long int
L gcd(L a,L b){
	if(a<b){
		return gcd(b,a);
	}else if(a>b){
		return gcd(a-b,b);
	}else{
		return a;
	}
}

int main(){
L a,b,g;
while(cin>>a>>b){
	g=gcd(a,b);
	cout<<g<<" "<<a*b/g<<endl;
}

return 0;
}