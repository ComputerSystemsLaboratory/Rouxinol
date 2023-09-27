#include <cstdio>

using namespace std;

int weights[100000];
int size = 0;
int truckAmount = 0;
long long num = 0;
long long upper = 0;
long long med = 0;
long long lower = 0;
long long sum = 0;
int count = 0;

bool test() {
	long long truck = 0;
	int trucks = 0;
	bool complete = false;
	if (truckAmount == 1) {
		return sum <= med;
	}
	for (int i = 0; i < size; i++) {
		if (weights[i] >  med) {
			return false;
		}
		complete = false;
		truck += weights[i];
		if ((truck + weights[i+1] > med)) {
			trucks++;
			truck = 0;
			complete = true;
		}
	}
	if (!complete) {
		trucks++;
	}
	return trucks <= truckAmount;
}

int main() {

	scanf("%d %d", &size, &truckAmount);
	for (int i = 0; i < size; i++) {
		scanf("%lld", &num);
		weights[i] = num;
	}
	upper = 1000000000;
	for (int i = 0; i < size; i++) {
		sum += weights[i];
	}
	num = 1000000000;
	med = (lower + upper) / 2;
	while (lower < upper - 1) {
		if (test()) {
			upper = med;
			if (med < num) {
				num = med;
			}
		} else {
			lower = med;
		}
		med = (lower + upper) / 2;
		count++;
	}
	printf("%lld\n", num);
}

