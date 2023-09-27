#include <cstdio>
using namespace std;

int main()
{
	int i,d;
	while (scanf("%d",&d)!=EOF){
		int sum=0;
		for (i=d;i<=600-d;i+=d){
			sum+=i*i*d;
		}
		printf("%d\n",sum);
	}
	return 0;
}