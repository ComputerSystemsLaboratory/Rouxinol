#include <cstdio>
#include <stack>
using namespace std;

stack<int> car;

int main()
{
	int n;
	while(scanf("%d",&n) != EOF) {
		if(n != 0) {
			car.push(n);
		} else {
			printf("%d\n",car.top());
			car.pop();
		}
	}	
	return 0;
}