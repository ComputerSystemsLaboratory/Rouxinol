#include <iostream>
#include <math.h>
using namespace std;
void douitu(void);
int N, c[100], after[100], work, minj, cou = 0;
char cc[100], cafter[100], cwork;
bool flag = 1;
int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cc[i] >> c[i];
		cafter[i] = cc[i]; after[i] = c[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j > i; j--) {
			if (after[j] < after[j - 1]) {
				work = after[j];		 cwork = cafter[j];
				after[j] = after[j - 1]; cafter[j] = cafter[j - 1];
				after[j - 1] = work;	 cafter[j - 1] = cwork;
			}
		}
	}
	douitu();
	if (flag == 1) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	flag = 1;
	for (int i = 0; i < N; i++) {
		cafter[i] = cc[i]; after[i] = c[i];
	}
	for (int i = 0; i < N; i++) {
		minj = i;
		for (int j = i; j < N; j++) {
			if (after[j] < after[minj]) {
				minj = j;
			}
		}
		if (minj != i) {
			work = after[i];		cwork = cafter[i];
			after[i] = after[minj]; cafter[i] = cafter[minj];
			after[minj] = work;		cafter[minj] = cwork;
		}
	}
	douitu();
	if (flag == 1) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}
void douitu(void)
{
	for (int i = 0; i < N; i++) {
		cout << cafter[i] << after[i];
		if (i != N - 1) cout << " ";
		else cout << endl;
	}
	for (int i = 0; i < N - 1  && flag == 1; i++) {
		if (after[i] == after[i + 1]) {
			if (i == N - 1 || after[i] != after[i + 2]) {
				for (int j = 0, k = 0; j < N && k - 1 <= cou; j++) {
					if (after[i] == c[j]) {
						if (cafter[i - (cou) + k] == cc[j]) { k++; }
						else { flag = 0; break; }
					}
				}
				cou = 0;
			}
			else {
				cou++;
			}
		}
	}
}