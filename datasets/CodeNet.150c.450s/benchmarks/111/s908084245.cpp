#include<cstdio>
#include<vector>
using namespace std;
int answer,num;
long long dp[2][21];
vector<int> number;
void Input()
{
	scanf("%d",&num);
	for(int f1=0;f1<num-1;f1++){
		int ibuf;
		scanf("%d",&ibuf);
		number.push_back(ibuf);
	}
	scanf("%d",&answer);
}
int main(void)
{
	Input();
	int flg=0;
	dp[0][number[0]]=1;
	for(int f1=1;f1<(int)number.size();f1++){
		if(!flg){
			for(int f2=0;f2<21;f2++){
				if(f2+number[f1]<=20){
					dp[1][f2+number[f1]]+=dp[0][f2];
				}
				if(f2-number[f1]>=0){
					dp[1][f2-number[f1]]+=dp[0][f2];
				}
			}
		}
		else{
			for(int f2=0;f2<21;f2++){
				if(f2+number[f1]<=20){
					dp[0][f2+number[f1]]+=dp[1][f2];
				}
				if(f2-number[f1]>=0){
					dp[0][f2-number[f1]]+=dp[1][f2];
				}
			}
		}
		flg=!flg;
		for(int f2=0;f2<21;f2++){
			dp[!flg][f2]=0;
		}
	}
	printf("%lld\n",dp[flg][answer]);
	return 0;
}