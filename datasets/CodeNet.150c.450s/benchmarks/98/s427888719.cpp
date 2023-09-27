#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

#define FOR(i,init,n) for(int i = init; i < n ;i++)
#define REP(i,n)  FOR(i,0,n)


int main()
{
	while (1){
		int t_cardnum,h_cardnum;
		int t_card[100] = { 0 }, h_card[100] = {0};
		int t_sum = 0, h_sum = 0;
		scanf("%d %d",&t_cardnum,&h_cardnum);

		if (t_cardnum == 0 && h_cardnum == 0){
			break;
		}

		int i, j;
		for (i = 0; i < t_cardnum; i++){
			scanf("%d", &t_card[i]);
			t_sum += t_card[i];
		}
		for (i = 0; i < h_cardnum; i++){
			scanf("%d", &h_card[i]);
			h_sum += h_card[i];
		}

		if ((t_sum + h_sum) % 2 == 1){
			printf("%d\n",-1);
			continue;
		}

		int diff;
		diff = t_sum - h_sum;

		int point,sum=1000,t_num,h_num;
		for (i = 0; i < t_cardnum; i++){
			for (j = 0; j < h_cardnum; j++){
				point = t_card[i] - h_card[j];
				if (point == (diff / 2)){
					if (sum>t_card[i] + h_card[j]){
						t_num = i;
						h_num = j;
						sum = t_card[i] + h_card[j];
					}
				}
			}
		}

		if (sum == 1000){
			printf("%d\n",-1);
		}
		else{
			printf("%d %d\n", t_card[t_num], h_card[h_num]);
		}
	}
	return 0;
}