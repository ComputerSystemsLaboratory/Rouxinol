#include "iostream"

using  namespace std;

#define N 1000000
#define M 300

int tet_num[M];
int tet_num_odd[M];
int ans_integer[N];
int ans_odd[N];

int main(){

	int n;
	int j = 1;

	for (int i = 0; i < M; i++){
		tet_num[i] = i*(i + 1)*(i + 2) / 6;
		if (tet_num[i] % 2 == 1){
			tet_num_odd[j] = tet_num[i];
			j++;
		}
	}

	for (int i = 0; i < N; i++){
		ans_integer[i] = N;
		ans_odd[i] = N;
	}

	while (1){

		cin >> n;

		if (n == 0)break;

		for (int m = 1; m <= n; m++){
			if (ans_integer[m] == N){
				for (int i = 1; i <= N; i++){
					if (m == tet_num[i]){
						ans_integer[m] = 1;
						break;
					}
					if (m - tet_num[i] > 0){
						if (ans_integer[m] > ans_integer[m - tet_num[i]] + 1)
							ans_integer[m] = ans_integer[m - tet_num[i]] + 1;
					}
					else break;
				}
				for (int i = 1; i <= N; i++){
					if (m == tet_num_odd[i]){
						ans_odd[m] = 1;
						break;
					}
					if (m - tet_num_odd[i] > 0){
						if (ans_odd[m] > ans_odd[m - tet_num_odd[i]] + 1)
							ans_odd[m] = ans_odd[m - tet_num_odd[i]] + 1;
					}
					else break;
				}
			}
		}

		cout << ans_integer[n] << " " << ans_odd[n] << endl;

	}


	return 0;

}