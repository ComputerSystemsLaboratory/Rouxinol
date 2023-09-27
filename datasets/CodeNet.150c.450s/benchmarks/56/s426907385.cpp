#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	long long  n, a;
	long long count = 0;
	long long  maxans;
	long long  minans;
	long long  sum = 0;
	cin >> n;
	do{
		cin >> a;
		
		if(count == 0){
			maxans = a;
			minans = a;
		}
		maxans = max(a, maxans);
		minans = min(a, minans);
		sum += a;
		count++;
	} while (n > count);

	cout << minans << ' ' << maxans << ' ' << sum << endl;

	return 0;
}