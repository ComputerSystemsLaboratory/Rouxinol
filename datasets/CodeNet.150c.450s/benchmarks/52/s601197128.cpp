#include <iostream>
#include <stack>

std::stack<int> st;
int main() {
	int x = 0;
	while(std::cin >> x) {
		if(x == 0) {
			int y = st.top(); //トップの値を取得
			st.pop(); //トップの値を消去(pop)
			std::cout << y << std::endl;
		} else {
			st.push(x); //トップに値を積む(push)
		}
	}
}
