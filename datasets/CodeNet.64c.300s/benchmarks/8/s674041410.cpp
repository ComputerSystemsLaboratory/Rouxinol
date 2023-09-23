#include<iostream>
using namespace std;
void call(int n)
{
	for (int a = 1; a <= n; a++)
	{
		if (a % 3 == 0){ cout << " " << a; }
		else if (a % 10 == 3){ cout << " " << a; }
		else for (int b = a; b != 0; b /= 10)
		{
			if (b % 10 == 3)
			{
				cout << " " << a;
				b = 0;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	call(n);
	cout << endl;
	return 0;
}