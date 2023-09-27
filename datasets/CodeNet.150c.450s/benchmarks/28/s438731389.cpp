//============================================================================
// Name        : Allocation.cpp
// Author      : Ken
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

//bool checkAllocated(const vector<int>&, const int, const int);

bool checkAllocated(const vector<int>& v, const int P, const int k){
	int num_truck = 1;
	int load_current_truck = 0;

	for(int i=0; i<v.size(); i++){
		if(v.at(i)>P){
			return false;
		}

		load_current_truck += v.at(i);
		if(load_current_truck > P){
			num_truck += 1;
			load_current_truck = v.at(i);
		}else{
			continue;
		}
	}

	if(num_truck>k){
		return false;
	}else{
		return true;
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	int sum = 0, max = 0;

	int input;
	for(int i=0; i<n; i++){
		cin >> input;
		v.push_back(input);
		sum += input;
		if(max < input){
			max = input;
		}
	}

	int begin = sum / k;
	int end = max * (n / k + 1);

	int largest_no = begin-1;
	int smallest_yes = end;
	bool isAllocated = false;
	//cout << begin << "\n";
	//cout << end << "\n";

	while(abs(smallest_yes - largest_no)>1){
		int current_pos = (smallest_yes + largest_no) / 2;
		isAllocated = checkAllocated(v, current_pos, k);
		if(isAllocated){
			//cout << current_pos << " is allocated\n";
			smallest_yes = current_pos;
		}else{
			//cout << current_pos << " is not allocated\n";
			largest_no = current_pos;
		}
	}

	cout << smallest_yes << "\n";

	return 0;
}

