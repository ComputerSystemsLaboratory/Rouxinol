#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		vector<int> v(n);
		rep(i,n) cin >> v[i];

		sort(v.begin(),v.end());

		int sum = 0;
		REP(i,1,v.size()-1) {
			sum += v[i];
		}

		cout << sum / (n-2) << endl;
	}

	return 0;
}