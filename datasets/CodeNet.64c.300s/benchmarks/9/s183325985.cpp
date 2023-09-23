#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int s = 100000;
	int n;
	cin >> n;
	while (n--) {
		if (int(s*1.05) % 1000 == 0) {
			s = int(s*1.05);
		}
		else {
			s = int(s*1.05) + (1000 - int(s*1.05) % 1000);
		}
	}
	printf("%d\n", s);
    return 0;
}