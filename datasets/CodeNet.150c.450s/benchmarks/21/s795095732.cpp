#include<iostream>
#include<cstdint>
using namespace std;

int main(){
	int64_t x;
	auto cubed_x = [](const int64_t x){return x*x*x; };

	cin >> x;
	cout << cubed_x(x) << endl;

	return 0;
}