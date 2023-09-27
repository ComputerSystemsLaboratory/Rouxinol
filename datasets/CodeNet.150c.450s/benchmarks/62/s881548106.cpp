#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> numbers;
	numbers.push_back(a);
	numbers.push_back(b);
	numbers.push_back(c);
	sort(numbers.begin(),numbers.end());//???????????????
	cout << numbers[0]  << " " << numbers[1] <<  " " << numbers[2] << endl;
}