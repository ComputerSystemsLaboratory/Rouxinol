#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

#define MAX_R 10
#define MAX_C 10000
#define MAX_P 1024

using namespace std;

bool field[MAX_R][MAX_C + 1];	//field[0 ~ MAX_R - 1][1 ~ MAX_C]
int Vinc[MAX_R];
int dp[MAX_P][MAX_C + 1];		//dp[0 ~ MAX_P - 1][1 ~ MAX_C]
int sum;
int table[MAX_P];

int R,C;
int ans;


void Vinc_set(){
	int n = 0;
	for(int i = 0;i < R;i++){
		n = 0;
		for(int j = 1;j <= C;j++){
			if(field[i][j]) n++;
			else n--;
		}
		Vinc[i] = n;
	}

	return ;
}

void table_set(int p,int n){
	if(p == 0){
		table[0] = sum;
	}
	for(int i = n;i < R;i++){
		int next = p + (1 << i);
		//printf("###next = %d\n",next);
		//if(next < pow(2,R)){
		table[next] = table[p] + Vinc[i];
		table_set(next,i + 1);
		//}
	}

	return ;
}

void init(){
	for(int i = 0;i < MAX_P;i++){
		for(int j = 1;j <= MAX_C;j++){
			dp[i][j] = 0;
		}
	}
	Vinc_set();
	table_set(0,0);
	/*puts("###table###");
	for(int i = 0;i < pow(2,R);i++){
		printf("###%d:%d\n",i,table[i]);
	}*/

	return ;
}

int calcHinc(int p,int n){
	int num = 0;
	for(int i = 0;i < R;i++){
		if(p & (1 << i)){
			if(field[i][n]) num--;
			else num++;
		}
		else{
			if(field[i][n]) num++;
			else num--;
		}	
	}

	return num;
}

void solve(){

	init();

	for(int i = 0;i < pow(2,R);i++){
		for(int j = 1;j <= C;j++){
			dp[i][j] = max(dp[i][j - 1],dp[i][j - 1] + calcHinc(i,j));
		}
	}

	ans = 0;
	int sum;
	for(int i = 0;i < pow(2,R);i++){
		sum = table[i];
		for(int j = 1;j <= C;j++){
			sum = max(sum,table[i] + dp[i][j]);
		}
		ans = max(ans,sum);
		//printf("###%d:ans = %d\n",i,ans);
	}

	return ;
}

int main(){

	while(true){
		scanf("%d%d",&R,&C);
		if(R == 0 && C == 0) break;
		int fake;
		sum = 0;
		for(int i = 0;i < R;i++){
			for(int j = 1;j <= C;j++){
				scanf("%d",&fake);
				if(fake) field[i][j] = true;
				else{
					field[i][j] = false;
					sum++;
				}
			}
		}
		//printf("###sum = %d\n",sum);

		solve();
	
		printf("%d\n",ans);
	}

	return 0;
}