#include <iostream>
using namespace std;

bool d[30];


int main(void)
{
	int n;

	for(int i = 0; i < 28; i++){
		cin >> n;
		d[n-1] = true;
	}
	for(int i = 0; i < 30; i++)
		if(!d[i])
			cout << i+1 << endl;

	return 0;
}