 #define _CRT_SECURE_NO_WARNINGS
 #define _USE_MATH_DEFINES
 #include <iostream>
 #include <list>
 #include <cstdio>
 #include <cmath>
 #include <cstring>
 #include <string>
 #include <vector>
 #include <algorithm>
 #include <utility>
 #include <queue>
 #include <iomanip>
 #define INF 2147483647
  
 using namespace std;

 int gcd(int a, int b)
{
	int tmp, r;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (1) {
		r = a % b;
		if (r == 0) break;
		a = b;
		b = r;
	}

	return (b);
}

 int main(void)
 {
	 int a, b;

	 cin >> a >> b;

	 cout << gcd(a, b) << endl;


	 return (0);
 }