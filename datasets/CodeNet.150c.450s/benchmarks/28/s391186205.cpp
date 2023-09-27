#include<vector>
#include<iostream>
#include<algorithm>
int ReturnNumberBaggage(std::vector<int> Baggage, int MaxWeightPerTruck, int k) {
	int NumberBaggage = 0, weightPerTruck = 0, NumberTruck = 0;
	for (int i = 0; i < Baggage.size(); ++i) {
		//next_truck
		if (weightPerTruck > 0 && MaxWeightPerTruck > 0 && weightPerTruck + Baggage[i] > MaxWeightPerTruck) {
			weightPerTruck = 0;
			++NumberTruck;
		}
		//finish_put
		if (NumberTruck == k) {
			break;
		}
		//put
		if (weightPerTruck + Baggage[i] <= MaxWeightPerTruck) {
			weightPerTruck += Baggage[i];
			++NumberBaggage;
		}
	}
	return NumberBaggage;
}
int main(void) {
	std::ios::sync_with_stdio(false);
	int n, k,max=0;
	std::cin >> n >> k;
	std::vector<int> Baggage(n, 0);
	for (int i = 0; i < n; ++i) {
		std::cin >> Baggage[i];
		max += Baggage[i];
	}
	int min = 1, MaxWeightPerTruck =(min+max)/2;
	while (min <= max) {
		if (n <= ReturnNumberBaggage(Baggage, MaxWeightPerTruck,  k)) {
			max = MaxWeightPerTruck - 1;
		}
		else {
			min = MaxWeightPerTruck + 1;
		}
		MaxWeightPerTruck = (min + max) / 2;
	}
	std::cout << MaxWeightPerTruck + 1 << std::endl;
	//	system("pause");
	return 0;
}