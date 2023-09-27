#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){
	vector<int> ans;

	while (1){
		int a, b;
		string op;

		cin >> a >> op >> b;

		if (op == "+"){
			ans.push_back(a + b);
		}
		else if (op == "-"){
			ans.push_back(a - b);
		}
		else if (op == "*"){
			ans.push_back(a * b);
		}
		else if (op == "/"){
			ans.push_back(a / b);
		}
		else{
			break;
		}
	}
	for (int i = 0; i < ans.size(); i++){
		cout << ans[i] << endl;
	}
	return 0;
}