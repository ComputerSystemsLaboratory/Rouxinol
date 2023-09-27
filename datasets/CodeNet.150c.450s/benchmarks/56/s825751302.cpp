#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	int i,j;
	vector<int> a;
	int max,min;
	long long sum = 0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> j;
		sum+=j;
		a.push_back(j);
	}
	max=a.at(max_element(a.begin(),a.end())-a.begin());
	min=a.at(min_element(a.begin(),a.end())-a.begin());

	cout << min << " " << max << " " << sum << endl;
	return 0;
}