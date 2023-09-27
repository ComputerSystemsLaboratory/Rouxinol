#include<vector>
#include<iostream>
#include<algorithm>
int ReturnCap(std::vector<int> Baggage, int P, int k) {
	int v = 0, c = 0, ntrack = 0;
	for (int i = 0; i < Baggage.size(); ++i) {
		if (c > 0 && P > 0 && c + Baggage[i] > P) {
			c = 0;
			++ntrack;
		}
		if (ntrack == k) {
			break;
		}
		if (c + Baggage[i] <= P) {
			c += Baggage[i];
			++v;
		}
	}
	return v;
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
	int min = 1,P=(min+max)/2;
	while (min <= max) {
		if (n <= ReturnCap(Baggage,  P,  k)) {
			max = P - 1;
		}
		else {
			min = P + 1;
		}
		P = (min + max) / 2;
	}
	std::cout << P + 1 << std::endl;
	//	system("pause");
	return 0;
}