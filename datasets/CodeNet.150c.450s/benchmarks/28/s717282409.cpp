//ポイント:P > max, はじめからかこえるだけかこっていくというやり方が理想の切り方
#include <cstdio>
#include <iostream>
#include <cmath>
#define MAX_LUGGAGE 100000//最大の荷物の数
#define MAX_truck 100000//最大のトラックの数
#define MAX_WEIGHT 10000//荷物の最大重量
#define ZERO 0

using namespace std;

int l_num;//number of luggage
int t_num;//num of truck
int luggage_array[MAX_LUGGAGE+1];//荷物の重量を保管する配列
int luggage_set[MAX_LUGGAGE+1];

int main(){
	int max = ZERO;//最大重量の荷物の重量
	int tmp_sum = 0;
	int P;
	int sum = 0;
	scanf("%d",&l_num);
	scanf("%d",&t_num);

	for(int i = 0;i < l_num;i++) scanf("%d",&luggage_array[i]);
	for(int i = 0;i < l_num;i++){
		if(luggage_array[i] > max) max = luggage_array[i];
		sum += luggage_array[i];
	}

	if(sum/t_num > max) P = sum/t_num;
	else P =max;
	for(;;P++){
		int t_tmp = 1;
		for(int i = 0;i < l_num;i++){
			tmp_sum += luggage_array[i];
			if(tmp_sum > P){
				t_tmp++;
				tmp_sum = luggage_array[i];
			}
		}
		tmp_sum = 0;
		if(t_tmp <= t_num) break;
	}

	cout <<P <<endl;
	return 0;
}