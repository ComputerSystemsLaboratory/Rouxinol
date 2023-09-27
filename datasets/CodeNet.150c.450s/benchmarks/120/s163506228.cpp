#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<queue>
#include<map>
#include<set>
#include<utility>
#include<bitset>

using namespace std;

bitset<10000> g[10];

int main()
{
    int r, c;
    while(true)
    {
        int ans = 0;
        cin>>r>>c;
        if(r==0 && c==0) break;
        for(int i = 0; i < r; ++i)
            for(int j = 0; j < c; ++j)
            {
                bool t;
                cin >> t;
                g[i][j] = t;
            }
        for(int i = 0; i < 1<<r; ++i)
        {
            int sum = 0;
            for(int j = 0; j < r; ++j)
                if(i & (1<<j))
                    g[j].flip();
            for(int j = 0; j < c; ++j)
            {
                int p = 0;
                for(int k = 0; k < r; ++k)
                    if(g[k][j])
                        p++;
                sum += max(p, r - p);
            }
            ans = max(ans, sum);
            for(int j = 0; j < r; ++j)
                if(i & (1<<j))
                    g[j].flip();
        }
        cout << ans << endl;        
    }
}
