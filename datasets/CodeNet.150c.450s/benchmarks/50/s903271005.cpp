#include<cstdio>

int main(){
	int money;
	int dat[] = {500,100,50,10,5,1};

	while(1){
		scanf("%d",&money);
		if(money == 0)break;
		int fishing = 1000-money;
		int cnt = 0;
		
		for(int i=0;i<6;++i){
			if(fishing < 0)break;
			int tmp = fishing/dat[i];
			fishing -= tmp * dat[i];
			cnt += tmp;
		}

		printf("%d\n",cnt);
	}
	return 0;
}