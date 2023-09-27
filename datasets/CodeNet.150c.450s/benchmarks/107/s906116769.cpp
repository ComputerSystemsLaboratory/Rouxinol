#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string S, T;

    cin >> S;
    cin >> T;

    vector<vector<int>> cost(S.length() + 1);

    for (int i = 0; i < S.length() + 1; i++)
    {
        cost[i].resize(T.length() + 1);
        cost[i][0] = i;
    }

    for (int i = 0; i < T.length() + 1; i++)
    {
        cost[0][i] = i;
    }

    int c;
    for (int i = 1; i < S.length() + 1; i++)
    {
        for (int j = 1; j < T.length() + 1; j++)
        {
            c = S[i-1] == T[j-1] ? 0 : 1;
            cost[i][j] = min(min(cost[i - 1][j], cost[i][j - 1])+1, cost[i - 1][j - 1] + c);
        }
    }
    cout << cost[S.length()][T.length()] << endl;
    /*
    for (int i = 0; i < S.length() + 1; i++)
    {
        for (int j = 0; j < T.length() + 1; j++)
        {
            cout << " " << cost[i][j];
        }
        cout << endl;
    }
    */
    
}
