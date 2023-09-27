#include <iostream>
#include <math.h>
using namespace std;

bool check(int a)
{
	bool flag = true;
	
	if (a % 2 == 0){
		return false;
	}

	for (int i = 3; i <= (int)sqrt(a); i += 2)
	{
		if (a%i == 0){
			flag = false;
			break;
		}
	}

	if (flag == true){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int n, m;
	int count = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m == 2){
			count++;
			continue;
		}
		if (check(m) == true){
			count++;
		}
	}

	cout << count << endl;

	return 0;
}