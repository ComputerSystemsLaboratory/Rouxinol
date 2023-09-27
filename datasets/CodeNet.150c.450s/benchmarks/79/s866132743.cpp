#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <deque>
#include <utility>
#include <queue>

#define MAX 100005
#define ll long long int
using namespace std;

int main(void) 
{
	int n, r;
	int i, j;
	vector <int> ans, p, c;
	int temp1, temp2;

	vector <int> huda(55);

	queue <int> temp; //????????????????´???????

	while (1) {
		cin >> n >> r;
		if (n == 0 && r == 0) {
			break;
		}

		for (i = 0; i < r; i++) {
			cin >> temp1 >> temp2;
			p.push_back(temp1);
			c.push_back(temp2);
		}

		huda[0] = 0;

		for (i = n; i > 0; i--) { //?????????????¨????
			huda[n - i + 1] = i;


		}

		for (i = 0; i < r; i++) {

			for (j = 0; j < c[i]; j++) {
				temp.push(huda[p[i] + j]); 
			}

			for (j = p[i] + c[i] - 1; j > c[i]; j--) {
				huda[j] = huda[j - c[i]]; // ??±???????????¨???
			}

			for (j = 1; j <= c[i]; j++) {
				huda[j] = temp.front();
				temp.pop();

			}



		}

		ans.push_back(huda[1]);

		p.clear();
		c.clear();

		


	}



	 
	for (i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}


	return (0);
}