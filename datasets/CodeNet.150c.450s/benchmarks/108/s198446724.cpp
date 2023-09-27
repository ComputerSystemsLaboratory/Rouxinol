#include <iostream>
#include <stack>
#include <queue>

using namespace std;

#define MAX 100

#define WHITE 0
#define GRAY 1
#define BLACK 2

int T;
int N;

int M[MAX][MAX];
int C[MAX],D[MAX];

void bfs(int s)
{
    queue<int> *q = new queue<int>;

    q->push(s);
    D[s] = 0;
    C[s] = GRAY;

    while(!q->empty())
    {
        int u = q->front();
        q->pop();

        for (int v = 0; v < N; v++)
        {
            if (M[u][v] && D[v] == -1)
            {
                C[u] = GRAY;
                D[v] = D[u] + 1;
                q->push(v);
            }
        }

        C[u] = BLACK;
    }
}

int main ()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        C[i] = WHITE;
        D[i] = -1;

        for (int j = 0; j < N; j++)
        {
            M[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int u, k;
        cin >> u >> k;
        u--;

        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

/*
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j > 0)
                cout << " ";
            cout << M[i][j];
        }
        cout << endl;
    }
*/
    bfs(0);

    for (int i = 0; i < N; i++)
    {
        cout << i+1 << " " << D[i] << endl;
    }

    return 0;
}



