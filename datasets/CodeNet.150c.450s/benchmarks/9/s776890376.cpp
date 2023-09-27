#include <iostream>
using namespace std;
   
int main()
{
	int s,k,m,n;
	char str[201];
	while (1) {
		cin >> str;
		if (str[0]=='-') break;
		n=0;
		while(str[n++]);
		n -= 1;
		cin >> s;
		m=0;
		for (int i=0; i<s; i++) {
			cin >> k;
			m += k;
		}	
		k = m % n;		

		for (int i=k; i<n; i++)
			cout << str[i];
		for (int i=0; i<k; i++)
			cout << str[i];
		cout << endl;
	}
	return 0;
}