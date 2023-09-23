#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> vec_height(10);
	
	for (auto& h : vec_height)
		cin >> h;

	sort(vec_height.begin(), vec_height.end(), greater<int>());
	
	cout
		<< vec_height[0] << endl
		<< vec_height[1] << endl
		<< vec_height[2] << endl;
	
    return 0;
}