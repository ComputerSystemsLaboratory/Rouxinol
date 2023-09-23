#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(ll a, ll b) {
    if(b == 0)
	return a;
    return GCD(b,a%b);
}


ll LCM(ll a, ll b) {
    
    ll G = GCD(a,b);

    return a/G * b/G * G;

}

int main() {

    ll a,b;

    while(cin >> a >> b) {

	cout << GCD(a,b) << " " << LCM(a,b) << endl;
    }

    return 0;
}