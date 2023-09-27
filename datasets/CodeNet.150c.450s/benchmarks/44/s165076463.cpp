#include <cstdio>

using namespace std;

int main()
{
	int a[4],b[4];
	while(scanf("%d",&a[0])!=EOF){
		scanf("%d %d %d",&a[1],&a[2],&a[3]);
		scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
		int hit=0,blow=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[i]==b[j]){
					if(i==j)hit++;
					else blow++;
				}
			}
		}
		printf("%d %d\n",hit,blow);
	}
	return 0;
}