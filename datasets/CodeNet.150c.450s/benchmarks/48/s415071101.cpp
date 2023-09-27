#include<iostream>
using namespace std;


int main() {
	int e;
	while (cin >> e && e>0) {
		int y=0;
		int z=0;
		int sum=0,summin=e; // min: NOTICE how we initialize the minimum

		for (y = 0; y*y+z*z*z <= e; ++y)
		{
			//cout << y << " " << z << endl;
			for (z=0 ; y*y+z*z*z <= e; ++z)
			{
				int x= e-y*y-z*z*z;
				sum = x+y+z;
				if (sum < summin) summin = sum;
       			//	cout << y << " " << z << endl;
			}
			z=0;
		}
		cout << summin << endl;
	}

	return 0;
}

