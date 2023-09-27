#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> stack, seq;
	int n;

	while(cin >> n){
		if(cin.eof()){
			break;
		}
		if(n == 0){
			seq.push_back(stack.back());
			stack.pop_back();
		}else{
			stack.push_back(n);
		}
	}
	for(int& n : seq){
		cout << n << endl;
	}
}