#include <iostream>

using namespace std;

int S[5000];

int main(){
	int n;
	while(cin >> n,n){
		S[0] = 0;
		int tmp,sum = 0;
		for(int i = 1; i <= n; i++){
			cin >> tmp;
			sum += tmp;
			S[i] = sum;
		}
		tmp = S[1] - S[0];
		for(int i = 0; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				if(tmp < S[j] - S[i]) tmp = S[j] - S[i];
			}
		}
		cout << tmp << endl;
	}
	return 0;
}