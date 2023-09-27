#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n,count = 0;
	stack<int> get;
	while(cin >> n){
		if(n==0){
			cout <<  get.top() << endl;
			get.pop();
			count -= 1;
		}
		else{
			get.push(n);
			count += 1;
		}
	}
	return 0;
}