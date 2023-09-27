#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n, n)
    {
        int max_s, min_s, sum;
        cin >> max_s >> min_s;
        sum = max_s + min_s;
        if(max_s<min_s) swap(max_s, min_s);
        for(int i=2; i<n; i++)
        {
            int s;
            cin >> s;
            sum += s;
            if(max_s<s) max_s = s;
            if(min_s>s) min_s = s;
        }
        cout << (sum - max_s - min_s) / (n - 2) << endl;
    }
}