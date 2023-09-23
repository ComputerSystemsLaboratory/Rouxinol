#include <cstdio>
using namespace std;

int main()
{
	int money = 100000,n;
	scanf("%d",&n);
	for(int i=0;i<n;++i) {
		money*=1.05;
		if(money%1000 > 0) {
			money+=1000-(money%1000);
		}
	}
	printf("%d\n",money);
	return 0;
}