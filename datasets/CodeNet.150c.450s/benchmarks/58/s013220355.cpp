#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int main() {
	stack<long int> n;
	char a[1000000];
	long int b;
	
	while(scanf("%s", a) != EOF){
		if(!strcmp(a , "+")){
			int x,y;
			x = n.top();
			n.pop();
			y = n.top();
			n.pop();
			n.push(x+y);
		}
		else if(!strcmp(a , "-")){
			int x,y;
			x = n.top();
			n.pop();
			y = n.top();
			n.pop();
			n.push(y-x);
		}
		else if(!strcmp(a , "*")){
			int x,y;
			x = n.top();
			n.pop();
			y = n.top();
			n.pop();
			n.push(x*y);
		}
		else {
			n.push(atol(a));
		}
	}
	printf("%ld\n", n.top());
	return 0;
}