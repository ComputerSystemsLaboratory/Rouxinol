#include <iostream>
#include <vector>
using namespace std;

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
