#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<bitset>

using namespace std;

const int MAXR = 15, MAXC = 10000+100;
int mapp[MAXR][MAXC];
int r, c;


int main()
{
    while(scanf("%d%d", &r, &c) == 2 && r && c)
    {
        for(int i=0; i<r; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                scanf("%d", &mapp[i][j]);
            }
        }
        int ans = 0;
        bitset<32> bs;
        for(int i=0; i<r; i++) bs[i] = 1;
        int m = bs.to_ulong();
        for(unsigned int i=0; i<=m; i++)
        {
            bs = i;
            int cnt = 0;
            for(int j=0; j<c; j++)
            {
                int cnt1 = 0, cnt0 = 0;
                for(int k=0; k<r; k++)
                {
                    if(mapp[k][j] && bs[k]==0) cnt1++;
                    else if(!mapp[k][j] && bs[k]) cnt1++;
                    else cnt0++;
                }
                cnt+= max(cnt1, cnt0);
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }


    return 0;
}