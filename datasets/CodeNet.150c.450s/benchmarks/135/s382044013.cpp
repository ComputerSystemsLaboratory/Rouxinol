#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int h1[2000000];
int w1[2000000];

int main(){
	
	while(true){
		
		int N, M;
		
		cin >> N >> M;
		if(N == 0 && M == 0){
			break;
		}
		
		int h[2000];
		int w[2000];
		
		for(int i = 0; i < 2000000; i++){
			h1[i] = 0;
			w1[i] = 0;
		}
		
		
		for(int i = 0; i < N; i++){
			cin >> h[i];
		}
		
		for(int i = 0; i < M; i++){
			cin >> w[i];
		}
		
		for(int i = 0; i < N; i++){
			int sum = 0;
			for(int j = i; j < N; j++){
				sum += h[j];
				h1[sum]++;
			}
		}
		
		for(int i = 0; i < M; i++){
			int sum = 0;
			for(int j = i; j < M; j++){
				sum += w[j];
				w1[sum]++;
			}
		}
		
		int ans = 0;
		
		for(int i = 0; i < 2000000; i++){
			ans += h1[i] * w1[i];
		}
		
		cout << ans << endl;
	}
	
	return 0;
}