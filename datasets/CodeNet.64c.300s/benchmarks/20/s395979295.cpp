// 2011/06/17 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int d;
		cin >> d;
		if(cin.eof())
			break;

		int sum = 0;
		for(int i=1; i<600/d; i++)
			sum += i*d*i*d*d;

		cout << sum << endl;
	}

	return 0;
}