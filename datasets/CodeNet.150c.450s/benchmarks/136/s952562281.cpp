#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int gcd(int a,int b){
	if(a%b == 0)return b;
	return gcd(b,a%b);
}

int main(){
	LL a,b;
	while(cin >> a >> b){
		LL c = gcd(a,b);
		cout << c << " " << a*b/c << endl;
	}
	return 0;
}