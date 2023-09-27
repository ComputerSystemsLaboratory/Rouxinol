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


int ctoi(char c) {
	switch (c) {
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	default: return -1;
	}
}

int mcxi_suu(string a) //??????????????°???
{
	int i, j;
	int temp; // number in front of mozi
	int sum = 0;

	queue<char> qu;

	for (i = 0; i < a.size(); i++) {
		qu.push(a[i]);
	}

	while (1) { 

		if (qu.empty() == true) {
			break;
		}

		temp = 1;

		if (qu.front() != 'm' && qu.front() != 'c' && qu.front() != 'x' && qu.front() != 'i') {
			temp = ctoi(qu.front()); //char??????int?????????????????°????????????
			qu.pop();
		}

		if (qu.front() == 'm') {
			sum = sum + temp * 1000;
		}

		if (qu.front() == 'c') {
			sum = sum + temp * 100;
		}

		if (qu.front() == 'x') {
			sum = sum + temp * 10;
		}

		if (qu.front() == 'i') {
			sum = sum + temp;
		}

		qu.pop();

	}



	return (sum);

}



string mcxi_st(int a)
{
	int i;
	int suu[4]; // [0]...1 [1]...10 [2]...100 [3]...1000
	string str;
	queue <char> qu;
	int size;
	char temp[10];

	suu[3] = a / 1000;
	a = a - 1000 * suu[3];

	suu[2] = a / 100;
	a = a - 100 * suu[2];

	suu[1] = a / 10;
	a = a - 10 * suu[1];

	suu[0] = a;

	//qu???????????????
	if (suu[3] == 1) {
		qu.push('m');
	}
	else if (suu[3] != 0) {
		sprintf(temp, "%d", suu[3]);
		qu.push(temp[0]);
		qu.push('m');
	}

	if (suu[2] == 1) {
		qu.push('c');
	}
	else if (suu[2] != 0) {
		sprintf(temp, "%d", suu[2]);
		qu.push(temp[0]);
		qu.push('c');
	}

	if (suu[1] == 1) {
		qu.push('x');
	}
	else if (suu[1] != 0) {
		sprintf(temp, "%d", suu[1]);
		qu.push(temp[0]);
		qu.push('x');
	}

	if (suu[0] == 1) {
		qu.push('i');
	}
	else if (suu[0] != 0) {
		sprintf(temp, "%d", suu[0]);
		qu.push(temp[0]);
		qu.push('i');
	}

	size = qu.size();

	for (i = 0; i < size; i++) {
		str.push_back(qu.front());
		qu.pop();
	}


	return (str);

}



int main(void)
{
	int n;
	int i, j;
	int sum = 0;
	vector<string> ans;
	string a, b; //????????????????????????
	string temp;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> a >> b;

		sum = mcxi_suu(a) + mcxi_suu(b);

	

		temp = mcxi_st(sum);



		ans.push_back(temp); 



	}

	for (i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}


	return (0);
}