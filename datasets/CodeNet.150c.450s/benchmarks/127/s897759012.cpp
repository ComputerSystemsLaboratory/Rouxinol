#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <deque>
#include <utility>

using namespace std;

int main(void)
{
	set <string> s;
	vector <string> date;
	string temp1, temp2;
	int m, n;
	int i, j, k;


	cin >> m;

	for (i = 0; i < m; i++) {
		cin >> temp1;
		date.push_back(temp1);
	}


	for (i = 0; i < m; i++) {

		n = date[i].size() - 1;

		for (j = 0; j < n; j++) { //temp1??¨temp2????????????
			
			for (k = 0; k < n + 1; k++) {
			
				temp1 = date[i].substr(0, j + 1);

				temp2 = date[i].substr(j + 1, n - j);
	

				s.insert(temp1 + temp2);
				s.insert(temp2 + temp1);

				reverse(temp1.begin(), temp1.end());
				s.insert(temp1 + temp2);
				s.insert(temp2 + temp1);

				reverse(temp2.begin(), temp2.end());
				s.insert(temp1 + temp2);
				s.insert(temp2 + temp1);

				reverse(temp1.begin(), temp1.end());
				s.insert(temp1 + temp2);
				s.insert(temp2 + temp1);



				temp1.clear();
				temp2.clear();

			}




		}

		
		cout << s.size() << endl;


		s.clear();
	}
	

	return (0);
}