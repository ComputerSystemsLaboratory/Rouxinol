#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define rep(i, j) for(int i = 0; i < j; i++)
// sp_rep
#define sp_rep(i, j) for(int i = 0; i <= j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	// code
	int n;
	while (cin >> n) {
		int cnt = 0;
		sp_rep(a, 9) {
			sp_rep(b, 9) {
				sp_rep(c, 9) {
					sp_rep(d, 9) {
						if (n == (a + b + c + d)) cnt++;
					}
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}