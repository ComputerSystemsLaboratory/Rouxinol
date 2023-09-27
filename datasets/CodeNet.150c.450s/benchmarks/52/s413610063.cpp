#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
	stack<int> sta;
	int num;
	while(scanf("%d", &num) != EOF){
		if(num == 0 && sta.empty() == 0){
			printf("%d\n",sta.top());
			sta.pop();
		}else{
			sta.push(num);
		}
	}
	return 0;
}