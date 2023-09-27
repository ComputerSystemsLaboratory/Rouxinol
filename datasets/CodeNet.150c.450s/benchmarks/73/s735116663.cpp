#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include <vector>
#include <array>
using namespace std;

enum command {
	com_add = 0,		//add(i, x) : a_i???x??????????????????
	com_getSum = 1		//getSum(s, t) : as, as + 1, ???, at???????¨??????????????????????
	
};
const int INIT = 0;
int main(){
	std::istream & c_in = cin;
	int n, q;
	c_in >> n >> q;
	array<int, 100000> A;
	A.fill(INIT);

	for (int j = 0; j < q; ++j)
	{
		int com, x, y;
		c_in >> com >> x >> y;
		if (com == com_add)
		{
			A[x] += y;
		}
		else if (com == com_getSum)
		{
			//
			long m = 0;
			for (int i = x; i <= y; ++i)
			{
				m += A[i];
			}
			cout << m << endl;
		}
	}
}