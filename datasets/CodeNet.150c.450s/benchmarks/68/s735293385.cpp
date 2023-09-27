#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n, n)
    {
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int min_dif = 10000000;
        for(int i=1; i<n; i++)
        {
            int d = a[i] - a[i-1];
            if(d<0) d = -d;
            min_dif = min(min_dif, d);
        }
        cout << min_dif << endl;
    }
}