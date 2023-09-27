#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
	int d;
	while(cin >> d){
		vector<int> sec;
		for(int i = d; i < 600; i += d){
			int y, z;
			y = i * i;
			z = y * d;
			sec.push_back(z);
		}
		int sum = accumulate(sec.begin(), sec.end(), 0);
		cout << sum << endl;
	}
	return 0;
}