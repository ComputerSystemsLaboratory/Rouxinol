#include <bits/stdc++.h>

using namespace std;

inline int sqd(int x, int y)
{
    return x * x + y * y;
}

int main()
{
    int h, w;
    while(cin >> h >> w, h|w)
    {
        int d = sqd(h, w);
        int rt = int(sqrt(d));
        int td = 100000000;
        int tx, ty;
        for(int y=rt; y>0; y--)
        {
            int x = y+1;
            while(sqd(x, y)<(y>h ? d : d+1)) x++;
            if(sqd(x, y)<=td)
            {
                tx = x;
                ty = y;
                td = sqd(x, y);
            }
        }
        cout << ty << " " << tx << endl;

    }
}