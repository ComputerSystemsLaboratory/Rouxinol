#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
//Global 
int n, s;
const int MAX_N = 1000;
int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
int counter;


void solve(int i, int SUM, int use)
{
	if (i == 10) {
		if (SUM == s && use == n) {
			counter++;
		}
	}
	if (i <= 9) {
		solve(i + 1, SUM, use);
		solve(i + 1, SUM + a[i], use + 1);
	}
}


int main()
{
	while (true) {
		cin >> n >> s;
		if (n == 0 && s == 0) {
			break;
		}
		counter = 0;
		solve(0, 0, 0);
		cout << counter << endl;
	}
	return 0;
}