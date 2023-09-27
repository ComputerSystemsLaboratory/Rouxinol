#include<iostream>
using namespace std;

int c[] = {500, 100, 50, 10, 5, 1};

int main(){
	for(;;){
		int N;
		cin >> N;
		if(N == 0) break;
		N = 1000 - N;
		int res = 0;
		for(int i = 0; i < 6; i++){
			int num = N / c[i];
			res += num;
			N -= c[i] * num;
		}
		cout << res << endl;
	}
	return 0;
}
