#include <bits/stdc++.h>

using namespace std;

int find(int e)
{
    int m = 1000000;
    for(int z=0; z<=100; z++)
    {
        int r = e - z*z*z;
        if(r<0) break;
        for(int y=0; y<=1000; y++)
        {
            int x = r - y*y;
            if(x<0) break;
            m = min(m, x+y+z);
        }
    }
    return m;
}

int main()
{
    int e;
    while(cin >> e, e) cout << find(e) << endl;
}