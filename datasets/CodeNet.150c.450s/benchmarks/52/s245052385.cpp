#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){

	stack<int> s;
	int num;
	while(cin >> num){
		if(num == 0){
			int t = s.top();s.pop();
			cout << t << endl;
		}
		else
			s.push(num);
	}


	return 0;
}