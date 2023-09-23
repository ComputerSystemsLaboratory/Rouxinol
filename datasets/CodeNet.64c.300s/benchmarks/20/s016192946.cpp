#include <iostream>
using namespace std;

int main()
{
	int d,fd;
	unsigned long int ans;
	while(cin >> d){
		ans = 0;
		int n = 600/d;
		for(int i=0;i<n;i++){
			fd = d*i;
			ans += fd*fd*d;
		}		
		cout << ans << endl;
	}
	return 0;
}