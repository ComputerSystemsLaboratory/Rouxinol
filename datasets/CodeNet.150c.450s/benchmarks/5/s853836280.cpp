#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n;
	cin >> n;
	stack<int> s;
	for(int i=0;i<n;i++){
		int a;cin >> a;
		s.push(a);
	}
	for(int i=0;i<n;i++){
		if(i!=0) cout << " ";
		cout << s.top();
		s.pop();
	}
	cout << endl;
}