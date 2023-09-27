#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    while(cin >> n >> p, n|p)
    {
        int counts[n];
        fill(counts, counts+n, 0);
        int cup = p;
        int i;
        for(i=0;; i=(i+1==n) ? 0 : i+1)
        {
            if(cup==0)
            {
                cup = counts[i];
                counts[i] = 0;
            }
            else
            {
                cup--;
                counts[i]++;
                if(counts[i]==p) break;
            }
        }
        cout << i << endl;
    }
}