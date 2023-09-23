#include <iostream>
using namespace std;
int n;
int saiki (int now)
{
	if (now == n)return 1;
	if (now > n)return 0;
	int res = 0;
	res = saiki(now+1)
	+ saiki(now+2)
	+ saiki(now+3);
	return res;	
}
int main ()
{
	while(true)
	{
		cin >> n;
		if(n==0)break;
		int answer = saiki (0);
		cout << answer/3650+1 << endl;
	}

}