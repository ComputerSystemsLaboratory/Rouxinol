#include<stdio.h>
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
	scanf("%d", &n);
	for (; n > 0; n--) {
		queue<int> all;
		queue<int> left;
		queue<int> right;
		for (int i = 0; i < 10; i++) {
			int temp;
			scanf("%d", &temp);
			all.push(temp);
		}
		solve(left, right, all);
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
	}	
	return 0;
}