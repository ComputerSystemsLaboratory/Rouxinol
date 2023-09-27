#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	stack<int> S;
	int n;
	while(cin >> n){
		if(n == 0){
			cout << S.top() << endl;
			S.pop();
		}else{
			S.push(n);
		}
	}
}
