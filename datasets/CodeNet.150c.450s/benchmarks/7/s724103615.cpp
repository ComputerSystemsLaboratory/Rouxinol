#include <iostream>
using namespace std;

int main()
{
	int m[10];
	int i, j, n;
	for(i=0; i<10; i++)
		cin >> m[i];

	for(j=0; j<10; j++)
	{
		for(i=j; i<10; i++)
		{
			if(m[j] < m[i])
			{
				n = m[i];
				m[i] = m[j];
				m[j] = n;
			}
		}
	}

	for(i=0; i<3; i++)
		cout << m[i] << endl;
}