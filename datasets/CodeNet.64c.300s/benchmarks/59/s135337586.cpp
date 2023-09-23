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


 int prime[10000];


bool isprime(int x)
{
	if (x == 2) return (true);
	if (x <= 1 || x % 2 == 0) return (false);

	for (int i = 3; i <= sqrt(x) + 1; i += 2) {
		if (x % i == 0) return (false); 
	}
	return (true); 
}

 int main(void)
 {
	 int n, x, cnt;

	 cnt = 0;
	 cin >> n;

	 for (int i = 0; i < n; i++) {
		 cin >> x;
		 if (isprime(x)) cnt++; 
	 }
	 cout << cnt << endl;

	 return (0);
 }