#include<iostream>
using namespace std;

int main(void) {
	while (1) {
		int n, m;
		cin >> n >> m;
		if (n == 0) return 0;
		int p[100] = { 0 }, p_sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> p[i];
			p_sum += p[i];
		}
		int q[100] = { 0 }, q_sum = 0;
		for (int i = 0; i < m; i++) {
			cin >> q[i];
			q_sum += q[i];
		}
		int pq_dif = p_sum - q_sum;
		int ans_p = 101, ans_q = 101;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m;j++) {
				if (2*(p[i] - q[j]) == pq_dif&&p[i]<ans_p) {
					ans_p = p[i];
					ans_q = q[j];
				}
			}
		}
		if (ans_p == 101) {
			cout << "-1" << endl;
		}
		else {
			cout << ans_p <<" "<< ans_q << endl;
		}
	}
}