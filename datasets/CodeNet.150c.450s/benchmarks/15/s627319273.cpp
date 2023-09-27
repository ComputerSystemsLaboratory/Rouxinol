#include<iostream>
using namespace std;

int main()
{
    int i, j, n, s[10010], q, t[510], sum = 0;
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    cin >> q;
    for (j = 0; j < q; ++j)
    {
        cin >> t[j];
        s[n] = t[j];
        i = 0;
        while(s[i] != t[j])
            ++i;
        if (i != n)
            sum++;
    }
    cout << sum << endl;
    return 0;
}