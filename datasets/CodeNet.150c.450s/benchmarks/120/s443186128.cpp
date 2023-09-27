#include <stdio.h>
#include <iostream>
#define R 11
#define C 10010

using namespace std;
int mp[R][C];
int r,c, Max;

void filp(int i)
{
    for (int j = 0; j < c; j++)
        mp[i][j] = !mp[i][j];
}

void dfs(int x)
{
    if (x == r-1)
    {
        int step;
        for (int j = 0; j < c; j++)
        {
            step = 0;
            for (int i = 0; i < r; i++)
            {
                if (mp[i][j])
                    step++;
            }
            if (step < r-step)
                for (int i = 0; i < r; i++)
                    mp[i][j] = !mp[i][j];
        }


        step = 0;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                if (mp[i][j])
                    step++;
            }
        Max = max(step, Max);
        return;
    }
    dfs(x+1);
    filp(x);
    dfs(x+1);
}

int main()
{
    while(~scanf("%d%d", &r, &c) && (r != 0 || c != 0))
    {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &mp[i][j]);

        Max = 0;
        dfs(0);

        cout<<Max<<endl;
    }

}