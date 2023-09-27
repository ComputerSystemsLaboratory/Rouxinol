#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

struct Puddle {
	int start; // 始点
	int size; // 面積
};

stack<int> s1;
stack<Puddle> s2;
string input;

int A = 0;
int k;
vector<int> l;

int main() {
	cin >> input;
	int length = input.size();

	for (int i = 0; i < length; i++) {

		if (input[i] == '\\') {
			s1.push(i); // 現在位置を積む

		}
		else if (input[i] == '/') {
			if (s1.empty()) { continue; } // 対応する左崖がないと何もしない

			// 総面積
			int left = s1.top();
			int size = i - s1.top();

			A += size; // 等y座標の左崖を取り出して、距離を総面積に加算する

			// 水たまり個々
			if (s2.empty()) s2.push({left, size});
			else {
				int leftmost = s2.top().start;
				int newsize = size;
				// 今回の水たまりの左位置よりも、水たまりの左位置が内部にある
				while (leftmost > left) {
					newsize += s2.top().size;
					s2.pop();

					if (s2.empty()) break;
					leftmost = s2.top().start;
				}

				// 新しい水たまりを代入する
				s2.push({ left, newsize });
			}

			s1.pop();
		}
		else if (input[i] = '_') {
			// 距離が増える
		}
	}

	cout << A << endl;

	int s2size = s2.size();
	cout << s2size;
	vector<int> output(s2size);
	for (int i = 0; i < s2size; i++) {
		output[s2size - i - 1] = s2.top().size;
		s2.pop();
	}

	for (int i = 0; i < s2size; i++) {
		cout << " " << output[i];
	}
	cout << endl;


	return 0;
}
