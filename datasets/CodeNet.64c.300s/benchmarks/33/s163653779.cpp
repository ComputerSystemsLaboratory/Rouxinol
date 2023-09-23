#include <iostream>
using namespace std;

int main()
{
		int a[20000], b[20000], n, i;
		char op[20000];
		while (1) {
				cin >> a[n] >> op[n] >> b[n];
				if (op[n] == '?') break;
				n++;
		}

		for (i=0; i<n; i++) {
				switch (op[i])
				{
						case '+':
								cout << a[i]+b[i] << "\n";
								break;
						case '-':
								cout << a[i]-b[i] << "\n";
								break;
						case '*':
								cout << a[i]*b[i] << "\n";
								break;
						case '/':
								cout << a[i]/b[i] << "\n";
								break;
						case '?':
								break;
				}
		}
}