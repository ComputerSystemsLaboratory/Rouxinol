#include<iostream>
using namespace std;

int main(void){
	int n = 0;
	int m = 0;
	int work = 0;
	cin >> n >> m;
	int vector_a [n][m];
	int vector_b[m];
	int vector_ans[m];
	for(int i = 0; i < n; i++){		//initialize
		for(int j = 0; j < m; j++){
			vector_a[i][j] = 0;
		}
	}
	for(int i = 0; i < m; i++){
		vector_b[i] = 0;
		vector_ans[i] = 0;
	}
	for(int i = 0; i < n; i++){		//input vector_a
		for(int j = 0; j < m; j++){
			cin >> vector_a[i][j];
		}
	}
	for(int i = 0; i < m; i++){		//input vector_b
		cin >> vector_b[i];
	}
	for(int i = 0; i < n; i++){
		work = 0;
		for(int j = 0; j < m; j++){
			work += vector_a[i][j] * vector_b[j];
		}
		vector_ans[i] = work;
	}
	for(int i = 0; i < n; i++){
		cout << vector_ans[i] << endl;
	}
	return 0;
}