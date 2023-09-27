#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n,m,p;
	int sum;
	int i1;

	while(1){
		cin >> n >> m >> p;
		if (n==0 && m==0 && p==0) break;

		vector<int> x(n);

		sum = 0;
		for(i1=0;i1<n;i1++){
			cin >> x[i1];
			sum += x[i1]*100;
		}

		sum = (sum*(100-p))/100;

		if (x[m-1]==0) cout << 0 << endl;
		else cout << sum/x[m-1] << endl;

	}

	return 0;
}