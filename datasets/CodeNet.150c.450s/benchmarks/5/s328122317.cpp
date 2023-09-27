#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n, input;
	cin >> n;
	vector<int> numbers;
	for(int i=1;i<=n;i++){
		cin >> input;
		numbers.push_back(input);
	}
  reverse(numbers.begin(),numbers.end());
	for(int i=0; i<numbers.size();i++){
		cout << numbers[i];
		if(i!=numbers.size()-1) cout << " ";
	}
  cout << endl;
}