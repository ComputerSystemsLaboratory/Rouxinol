#include<iostream>
#include<queue>;
using namespace std;

#define MAX 1000000001
long long CNT = 0;

void merge(long long a[], int begin, int end, int mid) {
	queue<long long> left;
	queue<long long> right;
	for (int i = begin; i < mid; i++)left.push(a[i]);
	for (int i = mid; i < end; i++)right.push(a[i]);
	left.push(MAX);
	right.push(MAX);

	int cnt = left.size() - 1;
	for (int i = begin; i < end; i++) {
		if (left.front() < right.front()) {
			a[i] = left.front();
			left.pop();
			cnt--;
		}
		else {
			a[i] = right.front();
			right.pop();
			CNT += cnt;
		}
	}
}

void m_sort(long long a[], int begin, int end) {
	if (begin >= end - 1)return;
	int mid = (begin + end) / 2;
	
	m_sort(a, begin, mid);
	m_sort(a, mid, end);

	merge(a, begin, end, mid);
}

int main() {
	long long ary[200000];
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary[i];
	}

	m_sort(ary, 0, n);

	cout << CNT << endl;
	return 0;
}