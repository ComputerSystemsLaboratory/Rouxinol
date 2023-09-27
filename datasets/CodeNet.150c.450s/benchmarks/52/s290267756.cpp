#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	vector<int> car;

	cin >> n;
	car.push_back(n);

	while(cin >> n){
		if(n!=0) car.push_back(n);
		else{
			cout << car.back() << endl;
			car.pop_back();
		}
	}
	return 0;
}