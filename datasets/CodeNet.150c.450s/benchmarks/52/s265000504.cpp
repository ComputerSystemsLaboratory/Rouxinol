#include<iostream>
#include<stack>
using namespace std;

int main(){
	int x;
	stack<int> train;
	while(cin >> x){
		if(x == 0){
			cout << train.top() << endl;
			train.pop();
		}else{
			train.push(x);
		}
	}
}