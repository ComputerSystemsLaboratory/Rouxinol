
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

struct hako {
	int tate;
	int yoko;
};
bool biggerthan(hako a, hako b) {
	int a2 = (a.tate)*(a.tate) + (a.yoko)*(a.yoko);
	int b2 = (b.tate)*(b.tate) + (b.yoko)*(b.yoko);
	if (a2 != b2) return a2 > b2;
	return a.tate > b.tate;
}
bool smallerthan(hako b, hako a) {
	int a2 = (a.tate) * (a.tate) + (a.yoko) * (a.yoko);
	int b2 = (b.tate) * (b.tate) + (b.yoko) * (b.yoko);
	if (a2 != b2) return a2 > b2;
	return a.tate > b.tate;
}
int main() {
	hako inp;
	hako hyouka;
	int a, b;
	int n, count;
	int resulttate[200] = {};
	int resultyoko[200] = {};
	hako tmp[30000];
	int nanko;
	for (count = 0; true; count++) {
		
		cin >> a >> b;
		inp.tate = a;
		inp.yoko = b;
		nanko = 0;
		if (a == 0 && b == 0) break;
		for (int i = 2; i < 150; i++) {
			for (int j = i-1; j > 0; j--) {
				hyouka.tate = j;
				hyouka.yoko = i;
				if (biggerthan(hyouka, inp)) {
					tmp[nanko].tate = j;
					tmp[nanko].yoko = i;
					nanko++;
				}
			}
		}
		sort(tmp, tmp + nanko, smallerthan);
			resulttate[count] = tmp[0].tate;
			resultyoko[count] = tmp[0].yoko;
	}
	for (int i = 0; i < count; i++) {
		cout << resulttate[i] << " " << resultyoko[i] << endl;
	}
}
	/*
	int n;
	long long int sumer = 0;
	int temp;
	int ave;
	int data[60000];
	int result[60000] = {};
	int count;
	for (count = 0; true; count++) {
		cin >> n;
		sumer = 0;
		temp = 0;
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			data[i] = temp;
			sumer += temp;
		}
		ave = sumer / n;
		for (int i = 0; i < n; i++) {
			if (data[i] <= ave) {
				result[count]++;
			}
		}
		
	}
	for (int i = 0; i < count; i++) {
		cout << result[i] << endl;
	}
	return 0;
}
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
*/
