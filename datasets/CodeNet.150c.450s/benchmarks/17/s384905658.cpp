#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> nums;
	for( int i=0; i<5; i++ ){
		int n;
		cin >> n;
		nums.push_back(n);
	}
	sort( nums.rbegin(), nums.rend() );
	for( int i=0; i<4; i++ ){
		cout << nums[i] << " ";
	}
	cout << nums[4] << endl;
	return 0;
}