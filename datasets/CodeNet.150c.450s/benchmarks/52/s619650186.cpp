#include <stack>
#include <iostream>
using namespace std;

int main(void){
	stack<int> st;
	int x;

	while(scanf("%d", &x) != EOF){
		if(x != 0){
			st.push(x);
		}else{
			printf("%d\n", st.top());
			st.pop();
		}
	}

	return 0;
}