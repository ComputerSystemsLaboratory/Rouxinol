
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
/*
//単一連結リストの実装
struct ListNode {
	int data;
	struct ListNode* next;
};*//*
int ListLength(struct ListNode* head) {
	struct ListNode* current = head;
	int count = 0;
	while (current != NULL) {
		count++;
		current = current -> next;
	}
	return count;
}
*/

int main()
{
	int n = 0;
	int owari = 11451414;
	int result[50010] = {};
	int sa = owari;
	int count = 0;
	while (true) {
		int dataset[50010];
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> dataset[i];
		}
		sort(dataset, dataset + n);
		sa = owari;
		for (int i = 1; i < n; i++) {
			if (abs(dataset[i] - dataset[i - 1]) < sa) {
				sa = abs(dataset[i] - dataset[i - 1]);
			}
		}
		result[count] = sa;
		count++;
	}
	for (int i = 0; i < count; i++) {
		cout << result[i] << endl;
	}
	return 0;
}

