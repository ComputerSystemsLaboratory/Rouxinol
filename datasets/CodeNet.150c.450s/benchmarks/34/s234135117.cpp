#include <iostream>
using namespace std;
int n;
int saiki(int ima)
{
	if(ima == n)
		return 1;
	if(ima > n)
		return 0;

	int res = 0;
	res += saiki(ima + 1) + saiki(ima + 2) + saiki(ima + 3);
	return res;
}

int main() {
	while (true){
		cin >> n;
		if (n == 0)
			break;
		
		int ans,a;
		ans = saiki(0);
		a = ans;
		ans /= 3650;
		a %= 3650;
		if( a == 0 )
		{
			cout << ans << endl;
		}
		else if( a != 0 )
		{
			ans++;
			cout << ans << endl;
			
		}
	}
}