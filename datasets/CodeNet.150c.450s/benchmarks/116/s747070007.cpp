#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int a[1000000];

int main()
{
    int n, k;
    while(cin >> n >> k && n && k) {
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll pre = 0;
        for(int i = 0; i < k; i++) {
            pre += a[i];
        }
        
        ll ret = pre;
        for(int i = 0; i < n - k; i++) {
            pre = pre - a[i] + a[k + i];
            ret = max(ret, pre);
        }
        
        cout << ret << endl;
    }
}