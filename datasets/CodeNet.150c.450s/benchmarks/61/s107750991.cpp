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
		int N, A, B, C, X;
		cin >> N >> A >> B >> C >> X;
		
		if(N == 0){
			break;
		}
		
		int num[200];
		
		for(int i = 0; i < N; i++){
			cin >> num[i];
		}
		
		int counter = 0;
		int cur = X;
		int ans = -1;
		
		for(int loop = 0; loop <= 10000; loop++){
			if(num[counter] == cur){
				counter++;
			}
			cur = (A * cur + B) % C;
			if(counter == N){
				ans = loop;
				break;
			}
		}
		
		cout << ans << endl;
		
	}
	
	return 0;
}