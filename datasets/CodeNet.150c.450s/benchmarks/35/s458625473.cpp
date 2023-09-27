#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main(void){
	int n;
	int i;
	int temp;
	int sum[5000];
	int num;
	
	while(1){
		for(i=0; i<5000; i++){
			sum[i] = -100001;
		}
		sum[0] = 0;
		num = 0;
	
		scanf("%d", &n);
		if(n == 0) break;
		
		for(i=0; i<n; i++){
			scanf("%d", &temp);
			if(temp > 0 && sum[num] < 0){
				num++;
				sum[num] = temp;
			}else if(temp > 0){
				sum[num] += temp;
			}else if(temp <= 0 && sum[num] < 0){
				num++;
				sum[num] = temp;
			}else{
				num++;
				sum[num] = sum[num-1] + temp;
				if(i == 0 && sum[num-1] == 0) sum[num-1] = -100001;
			}	
		}

		sort(sum, sum + 5000, greater<int>());
		
		printf("%d\n", sum[0]);
		
	}
	
	return 0;
}