#include <iostream>
#include <vector>
using namespace std;



int main(){

	vector <int> num_array;
	int car_num;
	size_t size();
	while (cin >> car_num){
	
		if (car_num != 0){
			num_array.push_back(car_num);
		}
		else if (car_num == 0){
			cout << num_array[num_array.size() - 1] << endl;
			num_array.pop_back();
		
		}
	}

	return 0;
}