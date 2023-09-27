// 2016/05/28 Tazoe

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	stack<int> S;

	string expr;
	getline(cin, expr);	// 1???????????????

	istringstream is(expr);	// ????????????????????????

	while(!is.eof()){
		string op;
		is >> op;

		int tmp1, tmp2;

		switch(op[0]){
		case '+':
			tmp1 = S.top();  S.pop();
			tmp2 = S.top();  S.pop();
			S.push(tmp2+tmp1);
			break;
		case '-':
			tmp1 = S.top();  S.pop();
			tmp2 = S.top();  S.pop();
			S.push(tmp2-tmp1);
			break;
		case '*':
			tmp1 = S.top();  S.pop();
			tmp2 = S.top();  S.pop();
			S.push(tmp2*tmp1);
			break;
		default:
			istringstream is2(op);
			is2 >> tmp1;
			S.push(tmp1);
			break;
		}
	}

	cout << S.top() << endl;

	return 0;
}