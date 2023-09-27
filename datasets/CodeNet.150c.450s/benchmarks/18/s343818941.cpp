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


Int a = 100000;


int main()
{
	int n;
	while (cin >> n){
		REP(i, n){
			a += a * 0.05;
			if (a % 1000){
				a /= 1000;
				++a;
				a *= 1000;
			}
		}
		cout << a << endl;
	}
}