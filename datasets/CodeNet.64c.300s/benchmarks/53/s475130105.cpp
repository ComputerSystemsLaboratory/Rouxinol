#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int a,b,c; cin >> a >> b >> c;
	int ans=0;
	for(int i=a;i<=b;i++){
		if(c%i==0)ans ++;
	}
	cout << ans << endl;
}
