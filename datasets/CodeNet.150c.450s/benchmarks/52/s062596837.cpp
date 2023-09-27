#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void){
	int tmp;
	stack<int> st;
	vector<int> vehicles;

	while (cin >> tmp){
		if (tmp != 0){
			st.push(tmp);
		}
		else{
			if (st.empty() == false){
				vehicles.push_back(st.top());
				//cout << st.top() << endl;
				st.pop();
			}
		}
	}

	vector<int>::iterator it = vehicles.begin();
	while (it != vehicles.end()){
		cout << *it << endl;
		++it;
	}
	return 0;
}