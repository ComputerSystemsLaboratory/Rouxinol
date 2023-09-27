#include<iostream>

using namespace std;

int N, M, P;

int main(){
	while(cin >> N >> M >> P, N){
		int sum = 0;
		int sum_m = 0;
		for(int n=1;n<=N;n++){
			int tmp;
			cin >> tmp;
			sum += tmp;
			if(n == M) sum_m = tmp;
		}
		if(sum_m == 0)
			cout << 0 << endl;
		else
			cout << ((sum*100)-(sum*P))/sum_m << endl;
	}
	

	return 0;
}