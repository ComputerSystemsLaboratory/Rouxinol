#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;


int main(){

	int num,winner,rate,sum,winner_get,tmp;

	while(true){
		scanf("%d %d %d",&num,&winner,&rate);
		if(num == 0 && winner == 0 && rate == 0)break;

		sum = 0;

		for(int i = 1; i <= num; i++){
			scanf("%d",&tmp);
			sum += tmp;
			if(i == winner){
				winner_get = tmp;
			}
		}

		if(winner_get == 0){
			printf("0\n");
		}else{
			printf("%d\n",(sum*(100-rate))/winner_get);
		}
	}

	return 0;
}