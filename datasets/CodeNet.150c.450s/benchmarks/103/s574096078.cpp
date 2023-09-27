//再帰関数と深さ優先探索を使う

#include<cstdio>

using namespace std;

void dfs(int,int,int,int);

int cnt=0,num=0;

int main(void){
	int n,s,i=0,sum=0;	//n=組み合わせの数、s=合計
	
	while(1){
		scanf("%d %d",&n,&s);
		if(n==0 && s==0)	break;
		dfs(n,s,i,sum);
		printf("%d\n",cnt);
		cnt=0;
		num=0;
	}

	return 0;
}

void dfs(int n,int s,int i,int sum){
	num++;
	while(1){
		if(i>=10-n+num){
			num--;
			break;
		}
		else{
			if(num==n){
				if(sum+i==s)	cnt++;
			}
			else{
				sum+=i;
				dfs(n,s,i+1,sum);
				sum-=i;
			}
		}
		i++;
	}
	return;
}