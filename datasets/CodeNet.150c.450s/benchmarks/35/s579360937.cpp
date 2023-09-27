#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

int main(){
	int n, tmp, max;
	int sum;
	vector<int> v;

	while(cin >> n){
		if(n == 0){
			break;
		}
		v.clear();
		while(n--){
			cin >> tmp;
			v.push_back(tmp);
		}
		max = v[0];
		for(int i = 0; i < v.size(); i++){
			sum = 0;
			for(int j = i; j < v.size(); j++){
				sum += v[j];
				if(sum > max){
					max = sum;
				}
			}
		}
		cout << max << endl;
	}

	return 0;
}