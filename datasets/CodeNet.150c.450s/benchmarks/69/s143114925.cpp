#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

bool flag = true;

void IsSplitable(queue<int> num, queue<int> left, queue<int> right) {
	if (num.size() > 0) {
		if (left.size() > 0) {
			if (num.front() > left.back()) {
				left.push(num.front());
				num.pop();
				IsSplitable(num, left, right);
			}
			else {
				if (right.size() > 0) {
					if (num.front() > right.back()) {
						right.push(num.front());
						num.pop();
						IsSplitable(num, left, right);
					}
					else {
						flag = false;
					}
				}
				else {
					right.push(num.front());
					num.pop();
					IsSplitable(num, left, right);
				}
			}
		}
		else {
			left.push(num.front());
			num.pop();
			IsSplitable(num, left, right);
		}
	}
}

int main() {
	int Indexnum;
	
	cin >> Indexnum;
	//getchar();
	for (size_t in = 0; in != Indexnum; ++in) {
		
		queue<int> number;
		queue<int> left;
		queue<int> right;
		for (size_t i = 0; i < 10; ++i) {
			int temp;
			cin >> temp;
			number.push(temp);
		}

		IsSplitable(number, left, right);

		if (flag == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		flag = true;
	}

	return 0;
}