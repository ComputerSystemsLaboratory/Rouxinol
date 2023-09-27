#include<iostream>
#include<algorithm>
using namespace std;

int check(int baggages[],int baggageAmount, int trackAmount, long maxWeight) {
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

	long long left = 0, right = 100000 * 10000;
	while (right - left > 1) {
		long weight = (left + right) / 2;
		if (check(baggages, baggageAmount, trackAmount, weight) >= weight) {
			right = weight;
		} else {
			left = weight;
		}
	}
	cout << right << endl;
	return 0;
}