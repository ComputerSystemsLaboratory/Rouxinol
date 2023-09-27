#include <iostream>
using namespace std;

int main()
{
	int d, a, b, s;

	d = 1;
	
	
	while(cin >> a >> b){
		
		s = 0;
		

		a += b;

		while(a>0){
			a /= 10;
			s++;
		}

		cout << s << endl;
		d++;

	}


	

	return 0;
}