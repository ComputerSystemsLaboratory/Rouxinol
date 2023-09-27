#include <iostream>
#include <set>
#include <queue>
using namespace std;

int main () {
	int n, size;
	string cmd, str;
	set<string> dic;
	queue<string> yn;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd >> str;
		if(cmd == "insert")
			dic.insert(str);
		else {
			if (dic.count(str))
				yn.push("yes");
			else
				yn.push("no");
		}
	}
	size = yn.size();
	for(int i = 0; i < size; i++) {
		cout << yn.front() << endl;
		yn.pop();
	}	
	return 0;
}