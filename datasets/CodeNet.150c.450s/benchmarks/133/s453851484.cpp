#include <iostream>

using namespace std;

int main()
{
    int d = 0;
    int c[26];
    int s[365][26];
    int t[365];
    int last[26] = {0};
    int score = 0;

    cin >> d;

    for(int i = 0; i < 26; i++)
    {
        cin >> c[i];
    }

    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < d; i++)
    {
        cin >> t[i];
        t[i]--;
    }

    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(t[i] == j)
            {
                last[j] = 0;
                score += s[i][j];
            }
            else
            {
                last[j]++;
                score -= c[j] * last[j];
            }
        }

        cout << score << endl;
    }

    return 0;
}