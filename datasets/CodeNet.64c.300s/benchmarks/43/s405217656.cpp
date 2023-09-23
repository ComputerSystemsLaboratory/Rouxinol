#include<iostream>
using namespace std;

int main()
{
	int a, b, s=0, t=0, i;

	for (i = 0; i < 4; i++){
		cin >> a;
		s += a;
	}

	for (i = 0; i < 4; i++){
		cin >> b;
		t += b;
	}

	if (s > t){ cout << s << endl; }
	else{ cout << t << endl; }

	return 0;
}