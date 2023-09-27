#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, x, j, k;

	while(cin >> n >> x && (n || x)) {

		if(x > 3*n - 3)  {
		    cout << "0\n";
            continue;
		}
		
		int count = 0;
		int kmax = min(n+1, x-2);

		for(k = max(3,x-2*n+3); k < kmax; ++k) {
			int jmax = min(k, x-k);
			for(j = max(2, x-n-k+2); j < jmax; ++j)
				count += (x - 2*j - k) < 0;
		}
		
		cout << count << endl;
	}
	
	return 0;
}

