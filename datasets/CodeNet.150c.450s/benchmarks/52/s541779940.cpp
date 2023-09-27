#include <stack>
#include <iostream>
using namespace std;

int main(){
	stack<int> garage;

	int car = 0;
	while(cin >> car){

		if(car != 0){
			garage.push(car);
		}else{
			cout << garage.top() << endl;
			garage.pop();
		}
	}
	return 0;
}