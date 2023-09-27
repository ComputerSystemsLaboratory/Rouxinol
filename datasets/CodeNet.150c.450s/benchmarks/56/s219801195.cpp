#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    auto max = -1000000;
    auto min = 1000000;
    long long total = 0;
    while(num--) {
    	int a;
		cin >> a;
		total += a;
		if (max < a) max = a;
		if (min > a) min = a;
    }
    cout << min << " " << max << " " << total << endl; 
}