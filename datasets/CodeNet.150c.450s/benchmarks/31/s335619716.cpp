#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> r;
    for (int i = 0; i < n; i++) {
        int ri;
        cin >> ri;
        r.push_back(ri);
    }

    int diffmax = r[1] - r[0];
    int rmin = r[0];
    for (int i = 1; i < n; i++) {
        diffmax = max(diffmax, r[i] - rmin);
        rmin = min(rmin, r[i]);
    }

    cout << diffmax << endl;

    return 0;
}

