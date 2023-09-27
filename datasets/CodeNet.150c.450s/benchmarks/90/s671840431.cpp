#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
	int max, cnt[100], x, i;
	memset(cnt,0,sizeof(cnt));
	while(scanf("%d",&x) != EOF){
		cnt[x - 1]++;
	}
	max = 0;
	for(i = 0;i < 100;i++){
		if(max < cnt[i]){
			max = cnt[i];
		}
	}
	for(i = 0;i < 100;i++){
		if(max == cnt[i]){
			printf("%d\n",i + 1);
		}
	}
	return 0;
}