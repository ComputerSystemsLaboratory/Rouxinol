#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int ara[n];

    for(int i = 0; i < n; i++)
        cin >> ara[i];

    vector <int> lis;

    for(int i = 0; i < n; i++)
    {
        auto it = lower_bound(lis.begin(), lis.end(), ara[i]);

        if(it == lis.end())
            lis.push_back(ara[i]);

        else
            lis[it - lis.begin()] = ara[i];
    }

    cout << lis.size() << '\n';

    return 0;
}

