#include<bits/stdc++.h>
using namespace std;


int main(void){

	int n, p;

	while (cin >> n >> p, n, p){

		int num[100] = { 0 };
		int stack = p;
		int result;

		for (int i = 0; i < 1100000; i++){
			if (stack == 0){
				stack += num[i%n];
				num[i%n] = 0;
			}
			else if (stack == 1 && num[i%n] == p - 1){
				result = i % n;
				break;
			}
			else{
				stack--;
				num[i%n]++;
			}
		}

		cout << result << endl;

	}

	return 0;
}

/*
for(i=0;i<N;i++){
cin >> X[i];
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
cin >> X[i][j];
}
}
*/