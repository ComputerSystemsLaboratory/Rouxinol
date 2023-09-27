#include <iostream>
using namespace std;

int main()
{

	while(true){

		int t;
		int count = 0;

		cin >> t;
		if(t==0)
			break;

		t = 1000-t;

		count += t/500;
		t = t-500*(t/500);

		count += t/100;
		t = t-100*(t/100);

		count += t/50;
		t = t-50*(t/50);

		count += t/10;
		t = t-10*(t/10);

		count += t/5;
		t = t-5*(t/5);

		count += t;

		cout << count << endl;
	}
	return 0;
}