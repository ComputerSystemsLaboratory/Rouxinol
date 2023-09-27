#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	int n, m, s1_sum, s2_sum, ans_s1, ans_s2, ans_sum;
	
	int s1[200], s2[200];
	
	while(true){
		cin >> n >> m;
		if(n == 0 || m == 0){
			break;
		}
		s1_sum = 0;
		s2_sum = 0;
		for(int i = 0; i < n; i++){
			cin >> s1[i];
			s1_sum += s1[i];
		}
		for(int i = 0; i < m; i++){
			cin >> s2[i];
			s2_sum += s2[i];
		}
		ans_sum = 1 << 30;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(s1_sum + 2 * s2[j] == s2_sum + 2 * s1[i]){
					if(ans_sum > s1[i] + s2[j]){
						ans_sum = s1[i] + s2[j];
						ans_s1 = s1[i];
						ans_s2 = s2[j];
					}
				}
			}
		}
		if(ans_sum == 1 << 30){
			printf("-1\n");
		}else{
			printf("%d %d\n", ans_s1, ans_s2);
		}
	}
	
	return 0;
}