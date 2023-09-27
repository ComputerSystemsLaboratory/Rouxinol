#include <iostream>
using namespace std;

int main(void)
{
	int d[2] = {0, 0};
	int c;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			cin >> c;
			d[i] += c;
		}
	}

	if(d[0] > d[1])
		cout << d[0];
	else
		cout << d[1];
	cout << endl;


	return 0;
}