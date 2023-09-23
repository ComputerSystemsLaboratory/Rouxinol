#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

void bubbleSort(int A[], int N) {
	int flag = 1,
		cnt = 0;
	while (flag) {
		flag = 0;
		for (int j = N - 1; j >= 1; j--) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				flag = 1;
				cnt++;
			}
		}
	}

	for (int i = 0; i < N; i++)	{
		cout << A[i];
		if (i != N - 1)cout << " ";
	}
	cout << endl;
	cout << cnt << endl;
}

int main() {
	int N; cin >> N;
	int A[100];
	for (int i = 0; i < N; i++)	{
		cin >> A[i];
	}
	bubbleSort(A, N);
	
	return 0;
}