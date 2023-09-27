#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, P;
	int pp[50];
	while(cin >> N >> P, N && P){
		int c = P;
		for(int i = 0; i < N; i++){
			pp[i] = 0;
		}
		
		int idx = 0;
		while(1){
			if(c > 0){
				pp[idx] += 1;
				c -= 1;
				if(pp[idx] == P){
					cout << idx << endl;
					break;
				}
			}else{
				c = pp[idx];
				pp[idx] = 0;
			}
			idx = (idx + 1) % N;
		}
	}
}