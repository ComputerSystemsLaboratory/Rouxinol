#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(void){

	string ts, a, b, outstr;
	getline(cin, ts);

	a = ts.substr(0, ts.find(' '));
	b = ts.substr(ts.find(' ') + 1, ts.size());

	int ia, ib;
	ia = stoi(a);
	ib = stoi(b);

	if (ia < ib)
	{
		outstr = "a < b";
	}
	else
	if (ia > ib)
	{
		outstr = "a > b";
	}
	else
	{
		outstr = "a == b";
	}

	cout << outstr << endl;

	return 0;
}