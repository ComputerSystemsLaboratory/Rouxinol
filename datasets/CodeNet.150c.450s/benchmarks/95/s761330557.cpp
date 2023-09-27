#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

void func(int n){
	int count = 0;
	char tmp[2],pre[2],pre_pre[2],buf[3];

	pre_pre[0] = 'd';
	pre_pre[1] = 'd';

	scanf("%s",buf);

	if(buf[0] == 'l'){
		pre[0] = buf[1];
		pre[1] = pre_pre[1];
	}else{
		pre[1] = buf[1];
		pre[0] = pre_pre[0];
	}

	if(n == 1){
		printf("0\n");
		return;
	}

	for(int i = 1; i < n; i++){
		scanf("%s",buf);

		if(buf[0] == 'l'){
			tmp[0] = buf[1];
			tmp[1] = pre[1];
		}else{
			tmp[1] = buf[1];
			tmp[0] = pre[0];
		}

		if(tmp[0] == 'd' && tmp[1] == 'd' && pre_pre[0] == 'u' && pre_pre[1] == 'u'){
			count++;
		}else if(tmp[0] == 'u' && tmp[1] == 'u' && pre_pre[0] == 'd' && pre_pre[1] == 'd'){
			count++;
		}

		pre_pre[0] = pre[0];
		pre_pre[1] = pre[1];
		pre[0] = tmp[0];
		pre[1] = tmp[1];
	}

	printf("%d\n",count);

}


int main(){

	int n;
	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		func(n);
	}

	return 0;
}