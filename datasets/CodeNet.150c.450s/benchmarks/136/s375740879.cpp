#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;

struct gg{ Int v, a, b; };

gg dp[1100][1100];
Int a[1100];
Int b[1100];

Int gcd(Int x, Int y){
	return x%y ? gcd(y, x%y) : y;
}

int main()
{

	Int x, y;
	while (cin >> x >> y){
		Int a = gcd(x, y);
		cout << a << " " << x*y / a << endl;
	}
}