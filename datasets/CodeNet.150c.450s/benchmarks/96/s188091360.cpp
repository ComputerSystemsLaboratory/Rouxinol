#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct B {
	int button, count;
};

string blist[] = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};	

int main() {
	int inputn;
	cin >> inputn;
	for(int i=0; i<inputn; i++){
		string input;
		cin >> input;
		queue<B> q;
		for(int j=0; j<input.size(); j++) {
			int count = 0;
			int button = input[j] - '0';
			for (; input[j] != '0'; j++) {
				count++;
			}
			if (count!=0) q.push({button, count});
		}
		
		while (!q.empty()) {
			B b = q.front(); q.pop();
			//cout << b.count << endl;
			cout << blist[b.button][(b.count-1) % blist[b.button].size()];
		}
		cout << endl;

	}
	return 0;
}