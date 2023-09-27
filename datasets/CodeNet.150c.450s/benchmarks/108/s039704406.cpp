#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> Q;
    int n;
    int a, b, c;
    cin >> n;
    int D[100], in[100][100];
    for (int i = 0; i < n; i++)
    {
        D[i] = -1;
        for (int j = 0; j < n; j++)
            in[i][j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = 0; j < b; j++)
        {
            cin >> c;
            in[c - 1][a - 1] = 1;
        }
    }
    Q.push(0);
    D[0] = 0;
    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        for (int i = 0; i < n; i++)
        {
            if (in[i][cur] == 1 && D[i] == -1) {
                D[i] = D[cur] + 1;
                Q.push(i);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << D[i] << endl;
    }
    return 0;
}