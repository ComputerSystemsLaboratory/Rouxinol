#include<bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<int> vi;

int main(){
//	freopen(".in", "r", stdin);
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int a, b;

	cin >> a >> b;

	if(a == b) cout << "a == b\n";
	if(a < b) cout << "a < b\n";
	if(a > b) cout << "a > b\n";

	return 0;
}
