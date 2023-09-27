#include <bits/stdc++.h>

using namespace std;

#define AC return 0

typedef long long ll;

map<string, bool> dic;

int main() {
	int t;
	string od, ch;
	scanf("%d", &t);
	while (t--) {
		cin >> od >> ch;
		if (od[0] == 'i') dic[ch] = true;
		else {
			if (dic[ch]) printf("yes\n");
			else printf("no\n");
		}
	}
}
