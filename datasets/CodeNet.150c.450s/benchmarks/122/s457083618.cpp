#include <stdio.h>
#include <queue>
using namespace std;

int main(void){
	priority_queue<int> p;
	int n;
	char str[20];
	while(scanf("%s",str),str[2]!='d'){
		if(str[2]=='s'){
			scanf("%d",&n);
			p.push(n);
		}else{
			printf("%d\n",p.top());
			p.pop();
		}
	}
	return 0;
}