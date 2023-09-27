#include <iostream>

using namespace std;

int main(){
	int N, M, P;
	int x[100];
	while(cin >> N >> M >> P, N){
		int winner = 0;
		int sum = 0;
		for(int i=0;i<N;i++){
			cin >> x[i];
			if(i+1 == M) winner = x[i];
			sum += x[i] * (100-P);
		}
		cout << (winner ? sum/winner : 0) << endl;
	}
}