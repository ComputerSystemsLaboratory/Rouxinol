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
#include <stack>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;

Int ans;

int main()
{
	int n;
	while (cin >> n){
		ans = 0;
		for (int i = 0; i < 600;i+= n){
			ans += i*i*n;
		}
		cout << ans << endl;
	}
	return 0;
}