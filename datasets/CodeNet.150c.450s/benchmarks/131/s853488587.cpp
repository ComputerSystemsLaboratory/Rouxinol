#include <stdio.h>
#include <cmath>
#include <algorithm>

struct Info{
	int number,order;
};

void func(int num,int digit){

	int checkTable1[10],checkTable2[10],max_num,min_num,S,tmp,index,ans_j;
	Info info[21];
	bool FLG;

	info[0].number = num;
	info[0].order = 0;
	index = 1;

	for(int i = 1; i <= 21; i++){

		for(int k = 0; k < 10; k++){
			checkTable1[k] = 0;
			checkTable2[k] = 0;
		}
		S = pow(10,digit-1);
		tmp = num;
		for(int k = 0; k < digit; k++){
			checkTable1[tmp/S]++;
			checkTable2[tmp/S]++;
			tmp %= S;
			S /= 10;
		}
		max_num = 0;
		S = pow(10,digit-1);

		for(int k = 9; k >= 1; k--){
			while(checkTable1[k] > 0){
				max_num += S*k;
				checkTable1[k]--;
				S /= 10;
			}
		}

		S = 1;
		min_num = 0;
		for(int k = 9; k >= 1; k--){
			while(checkTable2[k] > 0){
				min_num += S*k;
				checkTable2[k]--;
				S *= 10;
			}
		}

		num = max_num-min_num;

		FLG = false;
		for(int k = 0; k < index; k++){
			if(info[k].number == num){
				ans_j = info[k].order;
				FLG = true;
				break;
			}
		}

		if(FLG){
			printf("%d %d %d\n",ans_j,num,i-ans_j);
			break;
		}else{
			info[index].number = num;
			info[index].order = i;
			index++;
		}
	}
}

int main(){

	int first_num,digit;

	while(true){
		scanf("%d %d",&first_num,&digit);
		if(first_num == 0 && digit == 0)break;

		func(first_num,digit);
	}

	return 0;
}