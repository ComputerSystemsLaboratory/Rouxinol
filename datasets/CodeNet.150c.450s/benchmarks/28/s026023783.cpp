#include<iostream>
#include<algorithm>
using namespace std;

int a(int baggages[],int baggageAmount, int trackAmount, long maxWeight) {
	int i = 0;
	for (int j = 0; j < trackAmount; j++) {
		int weight = 0;
		while (baggages[i] + weight <= maxWeight) {
			weight += baggages[i];
			i++;
			if (i == baggageAmount) return maxWeight;
		}
	}
	return 0;
}

int main(void) {
	int baggageAmount, trackAmount, tracks[100001],baggages[100001];

	cin >> baggageAmount >> trackAmount;
	for (int i = 0; i < baggageAmount; i++) {
		cin >> baggages[i];
	}

	long long low = 0, high = 100000 * 10000;
	while(high - low > 1) {
		long weight = (low + high) / 2;
		if (a(baggages, baggageAmount, trackAmount, weight) >= weight) {
			high = weight;
		} else {
			low = weight;
		}
	}
	cout << high << endl;
	return 0;
}