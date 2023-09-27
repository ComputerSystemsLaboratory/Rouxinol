#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;
int main() {
	ll a, n, min, max, sum;
	min = 1000005;
	max = -1000005;
	sum=0;
	cin>> a;
	for (int i=0; i<a; i++) {
		cin>> n;
		if(n > max)
            max=n;
        if(n < min)
            min=n;
        sum= sum + n;
    }	
    cout << min << " " << max << " " << sum <<endl;
    return 0;
}
