#include <iostream>

using namespace std;
typedef long long LL;

int n, k;
LL w[100000];

int check(LL P) {
    int i = 0;
    for (int j = 0; j < k; j++) {
        LL s = 0;
        while (s + w[i] <= P) {
            s += w[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}

int solver() {
    LL left = 0;
    LL right = 100000 * 10000;
    LL mid;

    while (right > left) {
        mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) right = mid;
        else left = mid + 1;
    }
    return right;
}

int main()
{
    cin >> n >> k;
 
    for (int i = 0; i < n; i++)
        cin >> w[i];
 
    cout << solver() << endl;

    return 0;
}