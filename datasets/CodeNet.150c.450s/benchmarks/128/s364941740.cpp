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


string a;


int main()
{
	while (cin >> a){
		reverse(a.begin(), a.end());
		cout << a << endl;
	}
}