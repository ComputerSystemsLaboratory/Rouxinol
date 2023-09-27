#include <iostream>

using namespace std;

void calc(int types[], int D, int c[], int s[][27])
{
    int last[27];
    for (int i = 1; i <= 26; i++)
    {
        last[i] = 0;
    }
    int satisfy = 0;
    for (int d = 1; d <= D; d++)
    {
        int today = types[d];
        satisfy += s[d][today];
        last[today] = d;
        for (int i = 1; i <= 26; i++)
        {
            satisfy -= c[i] * (d - last[i]);
        }
        cout << satisfy << endl;
    }
    //return satisfy;
}

int main()
{
    int D;
    cin >> D;
    int c[26 + 1];
    for (int i = 1; i <= 26; i++)
    {
        cin >> c[i];
    }
    int s[D + 1][26 + 1];
    for (int d = 1; d <= D; d++)
    {
        for (int j = 1; j <= 26; j++)
        {
            cin >> s[d][j];
        }
    }
    int types[D+1];
    for(int d=1;d<=D;d++){
        cin >> types[d];
    }

    /*
    int types[D + 1];
    for (int d = 1; d <= D; d++)
    {
        int i_max = 1;
        int s_max = 0;
        for (int i = 1; i <= 26; i++)
        {
            if (s[d][i] > s_max)
            {
                s_max = s[d][i];
                i_max = i;
            }
        }
        cout << i_max << endl;
        types[d] = i_max;
    }
    */
    calc(types, D, c, s);
    return 0;
}