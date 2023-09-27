#include <iostream>
using namespace std;

int main(){
	int N;

	while(1){
		cin >> N;
		int count = 0;
		if(N==0){
			break;
		}

		for (int i = 0; i <= N; i++){
			int sum = 0;
			for (int j = i+1; j <= N; j++){
				if (sum < N){
					sum += j;
				}
				else if ((sum == N)&&(j >= i+2)){
					count += 1;
					break;
				}
				else if (sum > N){
					break;
				}

			}
		}
		cout << count << endl;

	}
}