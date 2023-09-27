#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(void){
	int n,i;
	vector<int> intv;

	while(cin >> n){
		intv.push_back(n);
		if(intv.size() == 5) break;
	}

	//cout << "input ended" << endl;

	sort(intv.begin(), intv.end());
	
	/*
	for(i=intv.size();i>1;i--){
		cout << intv[i-1] << " ";
	}

	cout << intv[0] << endl;
	*/
	
	vector<int>::iterator it = intv.end() - 1;
	while(it != intv.begin()){
		cout << *it << " ";
		--it;
	}

	cout << *it << endl;

	return 0;
}