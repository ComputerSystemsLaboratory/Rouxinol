#include <iostream>
using namespace std;
#include <algorithm>

int main(void){

	int n;
	cin >> n;

	int price[200000];
	int maxi;
	int mini;

	for (int i = 0; i < n; i++) cin >> price[i];

	mini = price[0];
	maxi = price[1] - mini;

	for (int i = 1; i < n; i++){

		maxi = max(maxi, price[i] - mini);
		if (mini > price[i]) mini = price[i];
	}

	cout << maxi << endl;
}