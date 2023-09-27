#include <stdio.h>
#include <stack>
#include <math.h>

using namespace std;


int main(){

	int n,m,taro[100],hanako[100],sum_taro,sum_hanako,minimum,taro_min,hanako_min;
	bool FLG;
	while(true){
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0)break;

		sum_taro = sum_hanako = 0;
		for(int i=0; i < n; i++){
			scanf("%d",&taro[i]);
			sum_taro += taro[i];
		}
		for(int i=0; i < m; i++){
			scanf("%d",&hanako[i]);
			sum_hanako += hanako[i];
		}

		FLG = false;
		minimum = 2147483647;
		for(int i=0; i < n; i++){
			for(int k = 0; k < m; k++){
				if(sum_taro-taro[i]+hanako[k] == sum_hanako-hanako[k]+taro[i] && taro[i]+hanako[k] < minimum){
					minimum = taro[i] + hanako[k];
					taro_min = taro[i];
					hanako_min = hanako[k];
					FLG = true;
				}
			}
			if(FLG)break;
		}

		if(!FLG)printf("-1\n");
		else{
			printf("%d %d\n",taro_min,hanako_min);
		}
	}

    return 0;
}