#include <iostream>

using namespace std;

int main()
{
	int count[101] = {0};
	int a;
	
	while ( cin >> a ) count[a]++;
	
	int max_freq = 0;
	for (int i=1; i<=100; i++) {
		if (max_freq < count[i]) max_freq = count[i];
	}
	for (int i=1; i<=100; i++) {
		if (count[i] == max_freq) cout << i << endl;
	}
	
	return 0;
}