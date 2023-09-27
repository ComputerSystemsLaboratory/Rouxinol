#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <deque>
#include <utility>
#include <map>

#define ll long long int
#define MAX 1000000

using namespace std;

int arr[MAX];

void Eratosthenes() 
{
	for (int i = 0; i < MAX; i++) {
		arr[i] = 1;
	}

	arr[1] = 0;

	for (int i = 2; i < sqrt(MAX); i++) {
		if (arr[i]) {
			for (int j = 0; i * (j + 2) < MAX; j++) {
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for (int i = 2; i < MAX; i++) {
		if (arr[i]) {
			//cout << i << endl;
		}
	}

}


int main(void)
{
	int a, d, n;
	int i;
	int count = 0;
	vector <int> ans;
	Eratosthenes();

	while (1) {
		count = 0;
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0) {
			break;
		}

		while (1) {

			if (arr[a] == 1) {
				count++;
			}


			if (count == n) {
				break;
			}



			a = a + d;

		}

		ans.push_back(a);

	}


	for (i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}




	return (0);
}