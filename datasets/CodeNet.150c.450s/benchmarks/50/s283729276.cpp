#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int m;
	int coin[6] = {500, 100, 50, 10, 5, 1};

	while (cin >> m, m){
		int cnt = 0;
		int change = 1000 - m;

		for (int i = 0; i < 6; i++){
			cnt += change / coin[i];
			change -= coin[i] * (change / coin[i]);
		}

		cout << cnt << endl;
	}

	return (0);
}