#include <iostream>
using namespace std;
 
int main()
{
	const int MAX = 100;
	int m[MAX], f[MAX],r[MAX];
	int i=0, max;
	
	do {
		cin >> m[i] >> f[i] >> r[i];
		i++;
	} while((m[i -1]!=-1)||(f[i-1]!=-1)||(r[i-1]!=-1)||(i==MAX));
	
	max = i - 1;
	
	for (int i = 0; i < max ; i++)
		if ((m[i]==-1)||(f[i]==-1))
			cout << 'F' << endl;
		else if (m[i] + f[i] >= 80)
			cout << 'A' << endl;
		else if (m[i] + f[i] >= 65)
			cout << 'B' << endl;
		else if (m[i] + f[i] >= 50)
			cout << 'C' << endl;
		else if (m[i] + f[i] >= 30) {
			if ( r[i] >= 50 )
				cout << 'C' << endl;
			else
				cout << 'D' << endl;
		}
		else
			cout << 'F' << endl;
	
	return 0;
}