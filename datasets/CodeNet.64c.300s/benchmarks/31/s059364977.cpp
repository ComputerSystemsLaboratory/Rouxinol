#include <iostream>
using namespace std;

bool seki[31] = {false};

int main()
{
	int s;
	for(int i=0;i<28;i++){
		cin >> s;
		seki[s] = true;
	}
	for(int i=1;i<31;i++){
		if(!seki[i])
			cout << i << endl;
	}
	return 0;
}