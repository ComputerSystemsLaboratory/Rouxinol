#include <iostream>
using namespace std;

int main()
{
	int n[1000], data[1000] = {0}, ans[100];
	int count = 0, count2 = 0, max = 0, max2 = 0;
	while (cin >> n[count]){
		if (n[count] > max)
			max = n[count];
		data[n[count]]++;
		count++;
	}
	for (int i = 0; i <= max; i++) {
		if (data[i] >= max2) {
			max2 = data[i];
		}
	}
	for (int i = 0; i <= max; i++) {
		if (data[i]==max2) {
			ans[count2] = i;
			count2++;
		}
	}
	for (int k = 0; k < count2; k++)
		cout << ans[k] << endl;
	return 0;
}