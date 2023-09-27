#include <iostream>
using namespace std;

int main()
{
	int N;
	while (cin >> N)
	{
		for (int i = 0; i < N; i++)
		{
			int a, b, c;
			cin >> a >> b >> c;
			
			bool A = a * a + b * b == c * c;
			bool B = c * c + b * b == a * a;
			bool C = a * a + c * c == b * b;
			if (A || B || C)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}



	return 0;
}
