#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> st;
	int n;
	while(cin >>n){
		if(n){
			st.push_back(n);
		}else{ // 0が入力されたとき
			cout << st.back() << endl;
			st.pop_back();
		}
	}
	return 0;
}