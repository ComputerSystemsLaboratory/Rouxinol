// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

typedef long long llong;
using namespace std;



int main() {
	char ch[1300];
	fgets(ch,1201,stdin);
	for (int i = 0; ch[i] != '\0'; i++) {
		if (65 <= ch[i] && ch[i] <= 90)ch[i] += 32;
		else if (97 <= ch[i] && ch[i] <= 122)ch[i] -= 32;
	}
	cout << ch;
	return 0;
}

