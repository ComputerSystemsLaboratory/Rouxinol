#include <iostream>
#include <vector>

using namespace std;

int main(){
	int input;
	vector<int> stack;
	while(cin >> input){
		if (input != 0){
			stack.push_back(input);
		}else{
			cout << stack.back() << endl;
			stack.pop_back();
		}

	}

}