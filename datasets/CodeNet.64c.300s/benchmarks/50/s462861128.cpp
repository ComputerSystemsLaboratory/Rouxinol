#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------


int n;
int a[110];

void print(void)
{
	for (int i = 0; i<n; i++) {
		if (i>0) cout << " ";
		cout << a[i];
	}
	cout << endl;
}

int main()
{
	cin >> n;
	for (int i = 0; i<n; i++) cin >> a[i];

	int ans = 0;
        for(int i=1;i<n;i++)
         for(int j=n-1;j>=i;j--) {
           if(a[j] < a[j-1]) {
              int v = a[j]; a[j] = a[j-1]; a[j-1]=v; ans++;
           }
         }

        print();
        cout << ans << endl;

	return 0;
}