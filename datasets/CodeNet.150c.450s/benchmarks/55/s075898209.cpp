// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

typedef long long llong;
using namespace std;



int main() {
	char iptNum[1100];
	int sum = 0;

	while (1) {
		fgets(iptNum, 1100, stdin);
		if (iptNum[0] == 48)break;
		sum = 0;
		for (int i = 0;48<= iptNum[i]&&iptNum[i]<=57 ; i++)sum += iptNum[i] -= 48;
		cout << sum << '\n';
	}

	return 0;
}

