#include <stdio.h>
#include <stack>

int main(){
	std::stack<int> st;

	int n;

	while(scanf("%d", &n) != EOF){
		if(n == 0){
			printf("%d\n", st.top());
			st.pop();
		}
		else{
			st.push(n);
		}
	}

	return 0;
}
		
	