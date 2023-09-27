#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        vector<int> scoreList;

        for (int i = 0; i < n; ++i)
        {
            int input;
            cin >> input;
            scoreList.push_back(input);
        }

        int min = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i != j)
                {
                    int dif = abs(scoreList[i] - scoreList[j]);
                    if (dif < min)
                    {
                        min = dif;
                    }
                }
            }
        }

        ans.push_back(min);
    }

    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << endl;
    }
}

