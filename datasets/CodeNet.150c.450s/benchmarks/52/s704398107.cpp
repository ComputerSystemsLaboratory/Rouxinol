#include <stdio.h>
#include <stack>

int main() {
	int space;
	std::stack<int> st;
	scanf("%d", &space);
	st.push(space);
	while(scanf("%d", &space ) != EOF) {
		if(space != 0) {
			st.push(space);
		} else {
			printf("%d\n", st.top());
			st.pop();
		}
	}
	return 0;
}