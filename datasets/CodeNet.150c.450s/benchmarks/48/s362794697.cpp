#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {
	int e;
	while(cin >> e && e > 0){
		int min_sum = 100000;
		for(int i = 0; i*i*i <= e; i++)
		{
			int j = sqrt(e - i*i*i);
			int k = e - i*i*i - j*j;
			int temp = i + j + k;
			min_sum = min(temp, min_sum);
		}
		cout << min_sum << endl; 
	}	
}
