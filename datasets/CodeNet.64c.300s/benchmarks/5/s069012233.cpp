#include <iostream>
using namespace std;

int main()
{
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;
	for (int i = 0; i < 10; i++)
	{
		int h;
		cin >> h;
		
		if (t1 < h)
		{
			t3 = t2;
			t2 = t1;
			t1 = h;
		}
		else if (t2 < h)
		{
			t3 = t2;
			t2 = h;
			//t1
		}
		else if (t3 < h)
		{
			t3 = h;
		}
	}
	
	cout << t1 << endl;
	cout << t2 << endl;
	cout << t3 << endl;
	
	return 0;
}