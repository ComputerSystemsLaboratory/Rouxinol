#include <iostream>
using namespace std;

int main()
{
	int d, width;
	int s = 0;
	
	
	while(cin >> d){

		width = d;

		while(d<600){
			s += width * (d*d);

			d += width;
		}
		
		cout << s << endl;
		s = 0;
	}
	return 0;
}