
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <climits>
#include <list>

using namespace std;

int main()
{
	int n;
	string taro, hanako;
	int score[2] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> taro >> hanako;
		if (taro > hanako) score[0] += 3;
		else if (taro < hanako) score[1] += 3;
		else {
			score[0]++;
			score[1]++;
		}
	}
	printf("%d %d\n", score[0], score[1]);
	return 0;
}