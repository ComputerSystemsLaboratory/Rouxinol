#include <bits/stdc++.h>
using namespace std;

int main() {
	set< string > dict;
	
	int n;
	cin >> n;
	
	char buf1[128], buf2[128];
	
	for (int i = 0; i < n; ++i) {
		scanf("%s %s", buf1, buf2);
		
		string op(buf1), str(buf2);
		
		if (op == "insert") {
			dict.insert(str);
		}
		
		if (op == "find") {
			if (dict.count(str)) puts("yes");
			else puts("no");
		}
	}
}