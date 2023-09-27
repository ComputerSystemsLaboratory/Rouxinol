#include <iostream>
using namespace std;
 
int main()
{
	const int MAX = 100;
	int n[MAX], x[MAX];
	int q, max, i=0;
	
	do {
		cin >> n[i] >> x[i];
		i++;
	} while((n[i -1]!=0)||(x[i-1]!=0)||(i==MAX));
	
	max = i - 1;
	
	for (int i = 0; i < max ; i++) {
		q = 0;
		for (int j = 1; j <= n[i]; j++)
			for (int k = j + 1; k <= n[i]; k++)
				for (int m = k + 1; m <= n[i]; m++)
					if (j + k + m == x[i])
						q++;
		cout << q << endl;
	}
	return 0;
}