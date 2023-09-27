#include <iostream>
#include <sstream>

using namespace std;

int gcd(int x, int y);

int main()
{
	string str;
	getline(cin, str);
	stringstream ss_size(str);
	
	int ary[2];
	string buff;
	int cnt = 0;
	while (getline(ss_size, buff, ' ')) {
		stringstream ss(buff);
		ss >> ary[cnt];
		cnt++;
	}

	//insert_sort(str, ary_size);
	cout << gcd(ary[0], ary[1]) << endl;
    return 0;
}
int gcd(int x, int y) {
	if (x < y) {
		int tmp = y;
		y = x;
		x = tmp;
	}
	int q = y;
	int r = x % y;

	if (r == 0) {
		// recursive end
		return y;
	}
	return gcd(q, r);
}