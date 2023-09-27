#include<iostream>
using namespace std;

int main()
{
	int am[13] = {0, 31,29,31,30,31,30,31,31,30,31,30,31 };
	int a, b;

	while (cin >> a >> b&&a!=0&&b!=0)
	{
		

		int c=b;
		for (int i = 0; i < a; i++) {
			c += am[i];
		}
		
		int d = c % 7;

		switch (d) {
		case 0:
			cout << "Wednesday" << endl;
			break;

		case 1:
			cout << "Thursday" << endl;
			break;
		
		case 2:
			cout << "Friday" << endl;
			break;

		case 3:
			cout << "Saturday" << endl;
			break;
			
		case 4:
			cout << "Sunday" << endl;
			break;

		case 5:
			cout << "Monday" << endl;
			break;

		case 6:
			cout << "Tuesday" << endl;
			break;
		}
	}

	return 0;
}