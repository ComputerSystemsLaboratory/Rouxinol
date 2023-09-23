#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999;
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define EPS 1e-10
typedef long long ll;
using namespace std;
typedef pair<int, int> P;



/*
class Target
{
public:
	vector <string> draw(int n)
	{

	}
};
*/



int main()
{
	int m, f, r;
	
	while (cin >> m >> f >> r)
	{
		if (m == -1 && f == -1 && r == -1) break;
		int sum = m + f;
		if (m == -1 || f == -1)
		{
			cout << "F" << endl;
		} else if (sum >= 80) {
			cout << "A" << endl;
		} else if (sum >= 65) {
			cout << "B" << endl;
		} else if (sum >= 50) {
			cout << "C" << endl;
		} else if (sum >= 30) {
			if (r >= 50)
			{
				cout << "C" << endl;
			} else {
				cout << "D" << endl;
			}
		} else {
			cout << "F" << endl;
		}
	}
	
	return 0;
}