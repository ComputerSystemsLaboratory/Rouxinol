#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int main(){

	int num_man,num_stone,table[50],common,next_mayor,index;

	while(true){
		scanf("%d %d",&num_man,&num_stone);
		if(num_man == 0 && num_stone == 0)break;

		for(int i = 0; i < num_man; i++)table[i] = 0;

		common = num_stone;
		index = 0;

		while(true){
			if(common > 1){
				table[index]++;
				common--;
			}else if(common == 1){
				table[index]++;
				common--;

				if(table[index] == num_stone){
					next_mayor = index;
					break;
				}
			}else{ //common == 0
				common += table[index];
				table[index] = 0;
			}
			index = (index+1)%num_man;
		}
		printf("%d\n",next_mayor);
	}

	return 0;
}