#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> in;

    for(int n; cin >> n;)
        if(!n) cout << in.top() << endl, in.pop();
        else in.push(n);

	return 0;
}