#include <iostream>
#include <vector>
using namespace std;
#define INF 10000;

int main(void){
	while(true){
		int n,m,sumT = 0,sumH = 0;
		cin >> n >> m;
		vector<int> T(n), H(m);
		if(n == 0 && m == 0)break;
		for(int i = 0; i < n; i++){
			cin >> T[i];
			sumT += T[i];
		}
		for(int i = 0; i < m; i++){
			cin >> H[i];
			sumH += H[i];
		}
		int ans_t = -1, ans_h, ans_sum = INF;
		int new_sumT, new_sumH;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				new_sumT = sumT - T[i] + H[j];
				new_sumH = sumH + T[i] - H[j];
				if(new_sumH == new_sumT && T[i] + H[i] < ans_sum){
					ans_t = T[i];
					ans_h = H[j];
					ans_sum = ans_t + ans_h;
				}
			}
		}
		if(ans_t == -1){
			cout << -1 <<endl;
		}else{
			cout << ans_t << ' ' << ans_h << endl;
		}

	}
	return 0;
}


/*
int main(void)
{
	while(true){
		int n, m;
		int tarou_sum = 0, hanako_sum = 0;
		int tarou_changed_sum, hanako_changed_sum;
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		vector<int> tarou(n), hanako(m);
		for(int i = 0; i < n; i++){
			cin >> tarou[i];
			tarou_sum += tarou[i];
		}
		for(int i = 0; i < m; i++){
			cin >> hanako[i];
			hanako_sum += hanako[i];
		}

		bool found = false;
		int tarou_answer, hanako_answer;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				tarou_changed_sum = tarou_sum - tarou[i] + hanako[j];
	 			hanako_changed_sum = hanako_sum - hanako[j] + tarou[i];
	 			if(tarou_changed_sum == hanako_changed_sum){
	 				if(found){
	 					if(tarou_answer + hanako_answer > tarou[i] + hanako[j]){
	 						tarou_answer = tarou[i];
	 						hanako_answer = hanako[j];
	 					}
	 				}else{
	 					found = true;
	 					tarou_answer = tarou[i];
	 					hanako_answer = hanako[j];
	 				}
	 			}else{
	 				continue;
	 			}


			}
		}

		if(found){
			cout << tarou_answer << ' ' << hanako_answer << endl;
		}else{
			cout << -1 << endl;
		}
	}
	return 0;
}

*/
