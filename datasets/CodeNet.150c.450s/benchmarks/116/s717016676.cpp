#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,k;

	while (1) {
		cin >> n >> k;

		if (n == 0 && k == 0 ){
			break;
		} // end if

		vector <int> a (n + 1, 0 );
		int res = 0, s = 0;

		for (int i = 1; i <= n; ++i){
			cin >> a[i];
			if (i < k ){
				s += a[i];
			}else if (i == k ){
				s += a[i];
				res = s;
			}else{ // if (i > k ){
				s -= a[i-k];
				s += a[i];
				res = max (res , s );
			} // end if				
		} // end for

		cout << res << endl;
	} // end loop
		
	return 0;
}