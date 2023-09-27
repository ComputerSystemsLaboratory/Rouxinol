#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <bitset>
using namespace std;

const int INF = 100001;

int main(void)
{
    long N, M;
    cin >> N >> M;
    // vector<vector<bool>> road(N, vector<bool>(N, false));
    map<int, vector<int>> road;
    for (int  i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        road[a].push_back(b);
        road[b].push_back(a);
    }

    vector<int> where_from(N, -1);
    where_from[0] = 1;
    
    // <room>
    queue<int> que;
    que.push(0);

    while (!que.empty())
    {
        int room = que.front();
        que.pop();

        for (int i = 0; i < road[room].size(); i++)
        {
            // 初めて訪れたら
            if(where_from[ road[room][i] ] == -1)
            {
                que.push( road[room][i] );
                where_from[ road[room][i] ] = room;
            }
        }
    }
    
    // いけるか
    for (int i = 1; i < N; i++)
    {
        if (where_from[i] < 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++)
    {
        cout << where_from[i] + 1 << endl;
    }

    return 0;
}