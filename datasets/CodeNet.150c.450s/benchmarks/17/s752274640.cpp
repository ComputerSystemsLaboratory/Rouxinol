#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) (V).begin(), (V).end()
#define PRINT(STR) cout << (STR) << endl

typedef long long ll;
using namespace std;

int nextInt() {
	int n = -1;
	cin >> n;
	return n;
}

int main() {
	cin.tie(0); //対話型には使えない
	ios::sync_with_stdio(false); //printfと共には使えない
	vector<int> numbers (5);
	REP(i, 5) {
		numbers[i] = nextInt();
	}
	sort(ALL(numbers));
	reverse(ALL(numbers));
	REP(i, 4) {
		cout << numbers[i] << " ";
	}
	cout << numbers[4] << endl;

	return 0;
}