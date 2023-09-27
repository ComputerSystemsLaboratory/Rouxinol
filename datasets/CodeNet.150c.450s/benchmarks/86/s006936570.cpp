#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int main(){
	
	while(true){
		
		int N, M, P;
		
		cin >> N >> M >> P;
		if(N == 0 && M == 0 && P == 0){
			break;
		}
		
		int hit;
		int sum = 0;
		
		for(int i = 0; i < N; i++){
			int num;
			cin >> num;
			if(i + 1 == M){
				hit = num;
			}
			sum += num;
		}
		
		if(hit == 0){
			cout << "0" << endl;
		}else{
			cout << sum * (100 - P) / hit << endl;
		}
	}
	
	return 0;
}