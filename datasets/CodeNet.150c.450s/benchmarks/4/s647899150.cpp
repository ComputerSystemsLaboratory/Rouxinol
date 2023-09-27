#include<iostream>
using namespace std;
int main()
{
	int m, f, r;
	cin >> m >> f >> r;
	while (m!=-1||f!=-1||r!=-1)

	{
		if (m == -1)
		{
			cout << "F" << endl;
		}
		else if (f == -1)
		{
			cout << "F" << endl;
		}
	    else if (m + f >= 80)
		{
			cout << "A"<< endl;
		}
		else if (m + f >= 65 && m + f < 80)
		{
			cout << "B" << endl;
		}
		else if (m + f >= 50 && m + f < 65)
		{
			cout << "C" << endl;
		}
		else if (m + f >= 30 && m + f < 50&&r<50)
		{
			cout << "D"<<endl;
		}
		else if (m + f >= 30 && m + f < 50 && r >= 50)
		{
			cout << "C" << endl;
		}
		else if (m == -1 || f == -1)
		{
			cout << "F" << endl;
		}
		else if (m + f < 30)
		{
			cout << "F" << endl;
		}
		cin >> m >> f >> r;
	}
	return 0;
}
