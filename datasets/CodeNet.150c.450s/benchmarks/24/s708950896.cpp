#include<iostream>

using namespace std;

int main(){

	int N, M;
	int Di, Pi;
	int P[11], sum;
	int cnt;

	while (1){

		cin >> N >> M;
		if (N == 0 && M == 0) break;

		for (int i = 0; i < 11; i++) P[i] = 0;
		sum = 0;
		cnt = 10;

		for (int i = 0; i < N; i++){
			cin >> Di >> Pi;
			P[Pi] += Di;
		}

		while (cnt != -1){
			if (P[cnt] >= 1 && M != 0) M--;
			else if(P[cnt]!=0) sum += cnt;
			if (P[cnt] >= 1) P[cnt]--;
			else cnt--;
		}
		cout << sum << endl;

	}
	return 0;
}