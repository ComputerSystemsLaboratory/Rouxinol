#include<iostream>
using namespace std;

int ans = 0;

void judge(int a,int b, int x)
{
	if (a<=x && x<=b) {
		ans += 1;
	}
}
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	for (int i = 1; i <= c; i++) {
		if (c%i == 0) {
			judge(a,b,i);
		}
	}
	cout << ans << endl;
	return 0;
}