#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

	array<int, 6> t{ {10, 100, 1000, 10000, 100000, 1000000} };
	int a, b;
	while (cin >> a >> b) {
		 int sum;
		 
		 sum = a + b;
		 auto result = find_if(t.begin(), t.end(), [sum](const int x){return sum < x; });
		 auto output = result - t.begin() + 1;
		 cout << output << endl;
	}


	return 0;
}