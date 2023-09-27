#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define all(a) (a).begin(), (a).end()

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
	string s;
	cin >> s;
	reverse(all(s));
	cout << s << endl;
}