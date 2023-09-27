#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> nums;
	int n;
	while( cin >> n, n ){
		nums.clear();
		nums.resize(n);
		for( int i=0; i<n; i++ )
			cin >> nums[i];
		int max=-50000000;
		for( int i=0; i<n; i++ ){
			int sum=0;
			for( int j=i; j<n; j++ ){
				sum += nums[j];
				if( max < sum )		max = sum;
			}
		}
		cout << max << endl;
	}
}