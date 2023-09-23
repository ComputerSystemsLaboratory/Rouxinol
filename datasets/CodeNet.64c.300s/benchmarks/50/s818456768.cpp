#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);

	int N, A[100], flag, cnt;

	cin >> N;
	for (int i = 0; i < N; i++)	cin >> A[i];

	flag = 1;  cnt = 0;
	while (flag){
		flag = 0;
		for (int j = N - 1; j >= 0;j--)
			if (A[j] < A[j - 1]){
				int tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
				flag = 1;
				cnt++;
			}
	}
	for (int i = 0; i < N; i++){
		cout << A[i];
		if (i == N - 1)
			cout << endl;
		else
			cout << " ";
	}
	cout << cnt << endl;

	return 0;
}