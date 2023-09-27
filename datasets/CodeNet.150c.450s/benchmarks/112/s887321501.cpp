#include <iostream>
using namespace std;

int main()
{

	int n;
	
	while(cin >> n, n){
		char a,b;
		char d[1000];
		for(int i = 0; i < 1000; i++)
			d[i] = -1;

		while(n > 0){
			n--;

			cin >> a >> b;

			d[a] = b;
		}

		cin >> n;

		char *s = new char[n+1];

		for(int i = 0; i < n; i++){
			cin >> a;
			if(d[a] != -1)
				s[i] = d[a];
			else
				s[i] = a;
			
		}
		s[n] = '\0';
		cout << s << endl;
	}






	return 0;
}