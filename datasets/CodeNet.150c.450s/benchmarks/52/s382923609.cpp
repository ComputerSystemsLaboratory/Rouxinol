#include<cstdio>
#include<stack>
using namespace std;
int main() {
	int n;
	stack<int> S;
	while(~scanf("%d",&n)) {
		if(n)
			S.push(n);
		else {
			printf("%d\n",S.top());
			S.pop();
		}
	}
	return 0;
}