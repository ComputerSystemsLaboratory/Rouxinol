#include<cstdio>
#include<stack>
#include<cctype>
#include<cstdlib>
using namespace std;

int main() {
	stack<int>	nums;
	char	s_tmp[20];
	int	n_tmp, op1, op2;

	while(scanf("%s", s_tmp) != EOF) {
		if(isdigit(s_tmp[0])) {
			n_tmp = atoi(s_tmp);
			nums.push(n_tmp);
		} else if(s_tmp[0] == '+') {
			op2 = nums.top(); nums.pop();
			op1 = nums.top(); nums.pop();
			nums.push(op1 + op2);
		} else if(s_tmp[0] == '-') {
			op2 = nums.top(); nums.pop();
			op1 = nums.top(); nums.pop();
			nums.push(op1 - op2);
		} else if(s_tmp[0] == '*') {
			op2 = nums.top(); nums.pop();
			op1 = nums.top(); nums.pop();
			nums.push(op1 * op2);
		}
	}

	printf("%d\n", nums.top());
}