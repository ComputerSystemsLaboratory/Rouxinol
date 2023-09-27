#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
typedef pair<int, int> P;

int n, m;
P info[10001];
 
int main()
{
    while (cin >> n >> m, n || m)  {
        long long ans = 0;
 
        for (int i = 0; i < n; i++) 
            cin >> info[i].second >> info[i].first;

        sort(info, info + n);
 
        for (int i = n - 1; i >= 0; i--) {
            if (m >= info[i].second)
                m -= info[i].second;
            else  {
                ans += (info[i].second - m) * info[i].first;
                m = 0;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}