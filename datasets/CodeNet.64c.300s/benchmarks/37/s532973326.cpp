#include <iostream>

using namespace std;

int N, counter;

void check(int a, int b){
	if(a + b == N){
		counter++;
	} else if(a + b < N){
		check(a + b, b + 1);
	}
}

int main(){
	while(1){
		counter = 0;
		cin >> N;

		if(N == 0) break;

		for(int i = 1;i < N;i++){
			check(i, i + 1);
		}

		cout << counter << endl;
	}

	return 0;
}