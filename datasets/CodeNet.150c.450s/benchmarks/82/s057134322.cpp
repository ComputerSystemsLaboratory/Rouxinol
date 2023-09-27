#include <iostream>
using namespace std;

int main()
{
	int a[6] = { 0 }, q = 0, b1 = 0, b2= 0, c[24] = { 0 };

	for (int i = 0; i < 6; i++)
		cin >> a[i];

	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> b1 >> b2;

		if(b1 == a[0]){
			if (b2 == a[1])
				c[i] = a[2];
			else if (b2 == a[2])
				c[i] = a[4];
			else if (b2 == a[3])
				c[i] = a[1];
			else if (b2 == a[4])
				c[i] = a[3];
		}
		else if(b1 == a[1]) {
			if (b2 == a[0])
				c[i] = a[3];
			else if (b2 == a[2])
				c[i] = a[0];
			else if (b2 == a[3])
				c[i] = a[5];
			else if (b2 == a[5])
				c[i] = a[2];
		}
		else if (b1 == a[2]) {
			if (b2 == a[0])
				c[i] = a[1];
			else if (b2 == a[1])
				c[i] = a[5];
			else if (b2 == a[4])
				c[i] = a[0];
			else if (b2 == a[5])
				c[i] = a[4];
		}
		else if (b1 == a[3]) {
			if (b2 == a[0])
				c[i] = a[4];
			else if (b2 == a[1])
				c[i] = a[0];
			else if (b2 == a[4])
				c[i] = a[5];
			else if (b2 == a[5])
				c[i] = a[1];
		}
		else if (b1 == a[4]) {
			if (b2 == a[0])
				c[i] = a[2];
			else if (b2 == a[2])
				c[i] = a[5];
			else if (b2 == a[3])
				c[i] = a[0];
			else if (b2 == a[5])
				c[i] = a[3];
		}
		else if (b1 == a[5]) {
			if (b2 == a[1])
				c[i] = a[3];
			else if (b2 == a[2])
				c[i] = a[1];
			else if (b2 == a[3])
				c[i] = a[4];
			else if (b2 == a[4])
				c[i] = a[2];
		}
	}

	for(int i = 0; i < q; i++)
		cout << c[i] << endl;

    return 0;
}