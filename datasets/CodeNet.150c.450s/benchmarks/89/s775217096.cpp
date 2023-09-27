#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 

using namespace std;

int judge(int m);

int func(int a, int d, int n, int j);

int main()
{
	int a, d, n;
	while(1){
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0) break;
		int ans, j;
		if(a == 1){
			if(d == 1 && n == 1) ans = 2;
			else ans = func(a+d, d, n, 0);
		} else {
			ans = func(a, d, n, 0);
		}
		cout << ans << endl;
	}
	return 0;
}

int judge(int m)
{
	int k = 2;
	while(1){
		if(k * k > m) return 1;
		else if(m % k == 0) return 0;
		else k++;
	}
}

int func(int a, int d, int n, int j)
{
	int c, cnt=0;
	while(1){
		c = a + (j * d);
		if(judge(c)) cnt++;
		if(cnt == n){
			return c;
			break;
		}
		j++;
	}
}