#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showStack(vector<int> A){
	for (int i = 0; i < A.size(); i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

int main(){
	vector<int> A;
	string input;

	while (cin >> input){
		if (input[0] == '+'){
			int m = A[A.size() - 1];
			A.pop_back();
			int n = A[A.size() - 1];
			A.pop_back();
			A.push_back(m + n);
		}
		else if (input[0] == '-'){
			int m = A[A.size() - 1];
			A.pop_back();
			int n = A[A.size() - 1];
			A.pop_back();
			A.push_back(n - m);
		}
		else if (input[0] == '*'){
			int m = A[A.size() - 1];
			A.pop_back();
			int n = A[A.size() - 1];
			A.pop_back();
			A.push_back(m * n);
		}
		else{
			A.push_back(stoi(input));
		}
	}

	cout << A[0] << endl;

	return 0;
}