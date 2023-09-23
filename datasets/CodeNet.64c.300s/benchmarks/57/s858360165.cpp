#include <iostream>
#include <bitset>
using namespace std;

bitset<10000> osenbei[10];
int ans;
int r,c;

void dfs(int deep);

int main()
{
    while(1)
    {
        cin >> r >> c;
        if(r==0 || c==0)
            break;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            {
                int osen;
                cin >> osen;
                osenbei[i][j] = osen;
            }
        ans = 0;
        dfs(0);
        cout << ans << endl;
    }
    return 0;
}


void dfs(int deep)
{
    if(deep==r)
    {
        int up,down;
        int temp_ans = 0;
        for(int j=0;j<c;j++)
        {
            up = down = 0;
            for(int i=0;i<r;i++)
            {
                if(osenbei[i][j])
                    up++;
                else
                    down++;
            }
            temp_ans += max(up,down);
        }
        ans = max(ans,temp_ans);
        return;
    }
    dfs(deep+1);
    osenbei[deep].flip();
    dfs(deep+1);
    osenbei[deep].flip();
}