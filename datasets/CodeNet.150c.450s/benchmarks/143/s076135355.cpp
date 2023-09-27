#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <queue>
using namespace std;

int arr[100002];
int main(){ int n, q; long long sum = 0;
    cin >> n;
    for (int i=0; i<n; i++){ int x;
        cin >> x;
        arr[x]++;
        sum += x;
    }
    cin >> q;
    for (int i=0; i<q; i++){ long long x, y;
        cin >> x >> y;
        sum = sum - x*arr[x];
        sum = sum + y*arr[x];
        arr[y] += arr[x];
        arr[x] = 0;
        cout << sum << endl;
    }
    return 0;
}