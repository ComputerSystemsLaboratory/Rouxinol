#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    vector<int> b(q);
    vector<int> c(q);
    for (int i = 0;i < q;i++){
        cin >> b[i] >> c[i];
    }
    vector<int> d(q);
    for (int i = 0;i < q;i++){
        d[i] = c[i] - b[i];
    }

    sort(a.begin(), a.end());
    vector<int> k(100000);
    for (int i = 0;i < n;i++){
        k[a[i]-1]++;
    }

    long long s = 0;
    for (int i = 0; i < n; i++){
        s += a[i];
    }

    for (int i = 0; i < q; i++){
        s += k[b[i]-1] * d[i];
        cout << s << endl;
        k[c[i]-1] += k[b[i]-1];
        k[b[i]-1] = 0;
    }
}
