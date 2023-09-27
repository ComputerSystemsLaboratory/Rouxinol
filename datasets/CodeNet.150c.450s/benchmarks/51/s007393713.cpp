// 2011/12/01 Tazoe

#include <iostream>
using namespace std;

int main()
{
	bool F[30];
	for(int i=0; i<30; i++)
		F[i] = false;

	for(int i=0; i<28; i++){
		int x;
		cin >> x;
		F[x-1] = true;
	}

	for(int i=0; i<30; i++)
		if(!F[i])
			cout << i+1 << endl;

	return 0;
}