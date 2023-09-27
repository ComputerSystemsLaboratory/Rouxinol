#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin >> n;
	int data;
	int MAX = INT_MIN;
	int MIN = INT_MAX;
	for(int i = 0; i < n; i++){
		cin >> data;
		MAX = max(MAX,data-MIN);
		MIN = min(MIN,data);
	}
	cout << MAX << endl;
}