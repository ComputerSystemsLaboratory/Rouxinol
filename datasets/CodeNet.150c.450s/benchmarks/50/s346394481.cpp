#include <cstdio>

using namespace std;

int main() {
	int coin[6]={500,100,50,10,5,1};
	int money,ans;
	while(scanf("%d",&money),money) {
		money=1000-money;
		ans=0;
		for(int i=0;i<6;i++) {
			ans+=money/coin[i];
			if(!(money%=coin[i])) break;
		}
		printf("%d\n",ans);
	}
}