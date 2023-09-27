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

using namespace std;

int main(void)
{
	vector <string> s, t; //s????????????t?????°???
	multimap<int, int> mp;
	vector <pair<int, int>> pr;
	vector <int> ans;
	string temp1, temp2;
	int m, n;
	int temp;
	int i, j, k;
	int count = 0; //???????????¬??°
	int max = 0;

	while (1) {

		cin >> n;
		if (n == 0) {
			break;
		}

		for (i = 0; i < n; i++) {
			cin >> temp1 >> temp2;


			temp = stoi(temp1.substr(0, 2)) * 3600 + stoi(temp1.substr(3, 2)) * 60 + stoi(temp1.substr(6, 2));

			pr.push_back(make_pair(temp, 1));

			temp = stoi(temp2.substr(0, 2)) * 3600 + stoi(temp2.substr(3, 2)) * 60 + stoi(temp2.substr(6, 2));

			pr.push_back(make_pair(temp, 0));


		}
		sort(pr.begin(), pr.end());

		for (i = 0; i < pr.size(); i++) {
			
			if (pr[i].second == 1) {
				count++;
				if (max < count) {
					max = count;
				}

			}
			else if (pr[i].second == 0) {
				count--;
			}

	
			

		}

		pr.clear();

		ans.push_back(max);
		max = 0;

	}

	for (i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}



	return (0);
}