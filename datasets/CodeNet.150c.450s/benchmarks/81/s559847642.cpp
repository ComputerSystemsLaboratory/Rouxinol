#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#define MAX_VIL_NUM 10

using namespace std;

int main(void){
	int n, a, b, c, i, j, con[MAX_VIL_NUM][MAX_VIL_NUM], used[MAX_VIL_NUM], distance[MAX_VIL_NUM], sum, ans_time, ans_vil, vil_num;
	while(1){
		scanf("%d",&n);
		if(n == 0){
			break;
		}
		vil_num = 0;
		memset(con,-1,sizeof(con));
		for(i = 0;i < n;i++){
			scanf("%d%d%d",&a,&b,&c);
			con[a][b] = c;
			con[b][a] = c;
			vil_num = max(vil_num,a + 1);
			vil_num = max(vil_num,b + 1);
		}
		ans_time = -1;
		for(i = 0;i < vil_num;i++){
			memset(used,0,sizeof(used));
			memset(distance,-1,sizeof(distance));
			distance[i] = 0;
			while(1){
				int min_el = -1;
				for(j = 0;j < vil_num;j++){
					if(used[j] == 0 && distance[j] != -1 && (min_el == -1 || distance[min_el] > distance[j])){
						min_el = j;
					}
				}
				if(min_el == -1){
					break;
				}
				for(j = 0;j < vil_num;j++){
					if(con[min_el][j] != -1 && (distance[j] == -1 || distance[min_el] + con[min_el][j] < distance[j])){
						distance[j] = distance[min_el] + con[min_el][j];
					}
				}
				used[min_el] = 1;
			}
			sum = 0;
			for(j = 0;j < vil_num;j++){
				if(distance[j] != -1){
					sum += distance[j];
				}
			}
			if(ans_time == -1 || ans_time > sum){
				ans_time = sum;
				ans_vil = i;
			}
		}
		printf("%d %d\n",ans_vil,ans_time);
	}
	return 0;
}