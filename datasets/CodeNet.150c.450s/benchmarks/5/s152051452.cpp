#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;

int main(){
	int size, num;
	vector<int> List;
	
	List.clear();
	
	cin >> size;
	
	for(int i = 0; i < size; i++){
		cin >> num;
		List.push_back(num);
	}
	
	for(int i = size - 1; i >= 0; i--){
		if(i != size - 1)	cout << " ";
		cout << List[i];
	}
	cout << endl;
}