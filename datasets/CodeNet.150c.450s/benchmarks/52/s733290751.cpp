#include <stdio.h>
#include <stack>
using namespace std;

int main(){
	stack<int> a;
	int k;
	while (scanf("%d", &k) != EOF) {
		if(k!=0)a.push(k);
		else if (k == 0) { printf("%d\n", a.top()); a.pop(); }
	}
	return 0;
}