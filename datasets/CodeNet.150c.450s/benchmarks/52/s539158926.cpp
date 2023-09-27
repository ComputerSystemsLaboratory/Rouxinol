#include<iostream>
#include<stack>
using namespace std;

int main(void){
	stack<int> cars;
	int car;
	while(cin>>car){
		if(car>0){
			cars.push(car);
		}else{
			cout << cars.top() << endl;
			cars.pop();
		}
	}
	return 0;
}