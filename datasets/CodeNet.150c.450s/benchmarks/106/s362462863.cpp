#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define rep(i,a,n) for(int (i)=a;(i)<(int)(n);(i)++)
#define rrep(i,a,n) for(int (i)=(n)-1;(i)>=a;(i)--)
#define all(x) (x).begin(),(x).end()

typedef long long ll;

int main() {
	int a,b,c;

	cin>>a>>b>>c;

	int ans = 0;

	rep(i,a,b+1) {
			if (c % i == 0) {
					ans++;
			}
	}

	cout << ans << endl;
}