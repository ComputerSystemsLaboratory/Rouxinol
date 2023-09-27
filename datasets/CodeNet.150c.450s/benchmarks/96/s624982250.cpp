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
	string s; // input
	int n;
	int i, j;

	string an;
	int zero = 0; // zero?????´???

	vector <string> ans;
	queue <char> qu;

	char temp;
	int count = 0;
	char tempm; //mozi???????????????????´?




	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> an;

		for (j = 0; j < an.size(); j++) { //qu?????°?????????
			qu.push(an[j]);

		}



		
		while (qu.empty() == 0) {
			count = 0;
			tempm = 'n'; //?????????


			while (1) {
				temp = qu.front();
				if (temp != '0') {
					tempm = temp;
					count++;
					qu.pop();
				}
				else { //0?????£??????
					qu.pop();
					break;
				}


			}



			if (tempm == '1') { // 1?????¨???
				count = count % 5;

				switch (count) {
				case 1:
					s.push_back('.');
					break;
				case 2:
					s.push_back(',');
					break;
				case 3:
					s.push_back('!');
					break;
				case 4:
					s.push_back('?');
					break;
				case 0:
					s.push_back(' ');
					break;
				}
			}
			else if (tempm == '2') { // 2
				count = count % 3;
				switch (count) {
				case 1:
					s.push_back('a');
					break;
				case 2:
					s.push_back('b');
					break;
				case 0:
					s.push_back('c');
					break;

				}
			}
			else if (tempm == '3') { // 3
				count = count % 3;
				switch (count) {
				case 1:
					s.push_back('d');
					break;
				case 2:
					s.push_back('e');
					break;
				case 0:
					s.push_back('f');
					break;

				}
			}
			else if (tempm == '4') { // 4
				count = count % 3;
				switch (count) {
				case 1:
					s.push_back('g');
					break;
				case 2:
					s.push_back('h');
					break;
				case 0:
					s.push_back('i');
					break;

				}
			}
			else if (tempm == '5') { // 5
				count = count % 3;
				switch (count) {
				case 1:
					s.push_back('j');
					break;
				case 2:
					s.push_back('k');
					break;
				case 0:
					s.push_back('l');
					break;

				}
			}
			else if (tempm == '6') { // 6
				count = count % 3;
				switch (count) {
				case 1:
					s.push_back('m');
					break;
				case 2:
					s.push_back('n');
					break;
				case 0:
					s.push_back('o');
					break;

				}
			}
			else if (tempm == '7') { // 7
				count = count % 4;
				switch (count) {
				case 1:
					s.push_back('p');
					break;
				case 2:
					s.push_back('q');
					break;
				case 3:
					s.push_back('r');
					break;
				case 0:
					s.push_back('s');
					break;

				}
			}
			else if (tempm == '8') { // 8
				count = count % 3;
				switch (count) {
				case 1:
					s.push_back('t');
					break;
				case 2:
					s.push_back('u');
					break;
				case 0:
					s.push_back('v');
					break;

				}
			}
			else if (tempm == '9') { // 9
				count = count % 4;
				switch (count) {
				case 1:
					s.push_back('w');
					break;
				case 2:
					s.push_back('x');
					break;
				case 3:
					s.push_back('y');
					break;
				case 0:
					s.push_back('z');

				}
			}




		}

		ans.push_back(s);
		



		s.clear();
	}

	for (i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}


	return (0);
}