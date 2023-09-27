#include<stdio.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool flag = true;

void solve(queue<int> left, queue<int> right, queue<int> all) {
	if (all.size() > 0) {
		if (left.size() > 0) {
			if (all.front() > left.back()) {
				left.push(all.front());
				all.pop();
				solve(left, right, all);
			}
			else {
				if (right.size() > 0) {
					if (all.front() > right.back()) {
						right.push(all.front());
						all.pop();
						solve(left, right, all);
					}
					else if(all.size() == 0){
					
					}
					else {
						flag = false;
					}
				}
				else {
					right.push(all.front());
					all.pop();
					solve(left, right, all);
				}
			}
		}
		else {
			left.push(all.front());
			all.pop();
			solve(left, right, all);
		}
	}
}

int main() {

	int n;
	cin >> n;
	for (; n > 0; n--) {
		queue<int> all;
		queue<int> left;
		queue<int> right;
		for (int i = 0; i < 10; i++) {
			int temp;
			cin >> temp;
			all.push(temp);
		}
		solve(left, right, all);
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}



	
				   
}