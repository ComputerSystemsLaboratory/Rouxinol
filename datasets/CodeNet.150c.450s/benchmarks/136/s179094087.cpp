#include <iostream>
#include <algorithm>
using namespace std;
//辗转相除 
int gcd(int a, int b) {
	if(b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main()
{
	int a, b;
	while(cin >> a >> b) {
		
		int a1 = max(a, b);
		int b1 = min(a, b);
		int res1 = gcd(a, b);					//最大公约数 
		long long t = (long long)a * b;		//t可能会超int范围(没有尝试) 
		long long res2 = t / res1;			//最小公倍数 
		cout << res1 << " " << res2 << endl;
		
	}
	return 0;
}
