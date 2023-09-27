#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int a,b,c; cin >>a>>b>>c;
	cout <<min({a,b,c})<<" ";
	cout <<a+b+c-min({a,b,c})-max({a,b,c})<<" ";
	cout << max({a,b,c})<<endl;
	

}
