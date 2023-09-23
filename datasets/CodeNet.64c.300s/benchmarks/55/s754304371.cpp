#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
	int n, cnt = 1;
	while(cin >> n && n != 0)
	{
		cout << "Case " << cnt <<": " << n << endl;
		cnt++;
	}
	return 0;
} 
