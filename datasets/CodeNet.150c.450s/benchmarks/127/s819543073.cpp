#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <set>

using namespace std;

int main ( void )
{
	int n;
	
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		set<string> train;
		string in;

		cin >> in;

		for (int j = 1, jlen = in.size(); j < jlen; ++j)
		{
			string a, b, ra, rb;
			
			a = ra = in.substr(0, j);
			b = rb = in.substr(j);
			reverse(ra.begin(), ra.end());
			reverse(rb.begin(), rb.end());

			train.insert(a + rb);
			train.insert(rb + a);
			train.insert(b + ra);
			train.insert(ra + b);
			train.insert(ra + rb);
			train.insert(rb + ra);
			train.insert(b + a);
		}

		train.insert(in);
		reverse(in.begin(), in.end());
		train.insert(in);

		cout << train.size() << endl;
	}
}