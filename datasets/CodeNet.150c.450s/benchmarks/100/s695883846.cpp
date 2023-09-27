#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	long long pro =1;
	vector<int> array;
	cin >> n;
	for(int i = n; i > 0; i--){
			array.push_back(i);
	}
	for(int i = 0; i < array.size(); i++){
		pro *= array[i];
	}
	cout << pro << endl;
	return 0;
}