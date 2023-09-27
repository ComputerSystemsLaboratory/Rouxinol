#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	long long tmp, sum = 0;
	vector<long long> a;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		a.push_back(tmp);
		sum += tmp;
	}
	cout << *min_element(a.begin(),a.end()) << " "
		 << *max_element(a.begin(),a.end())	<< " "
		 << sum << endl;
	return 0;
}