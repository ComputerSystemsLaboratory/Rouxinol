#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,q,sum = 0,j = 0;
    cin >> n;
    vector<long long int> arr(100001,0);
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        sum += a;
        arr[a]++;
    }
    cin >> q;
    for (int i = 0;i<q;i++)
    {
        long long int b,c;
        cin >> b >> c;
        sum += (c - b) * arr[b];
        arr[c]+=arr[b];
        arr[b]=0;
        cout << sum << endl;
    }
}