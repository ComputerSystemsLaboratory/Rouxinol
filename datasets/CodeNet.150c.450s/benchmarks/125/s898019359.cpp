#include <iostream>
#include <stack>
using namespace std;

#define MAX 100

#define WHITE 0
#define GRAY 1
#define BLACK 2

int T;
int N;

int M[MAX][MAX];
int D[MAX], F[MAX], C[MAX];

void dfs(int u)
{
    C[u] = GRAY;
    D[u] = ++T;

    for (int i = 0; i < N; i++)
    {
        if(M[u][i] == 1 && C[i] == WHITE)
        {
            dfs(i);
        }        
    }
    C[u] = BLACK;
    F[u] = ++T;
}

int main ()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        D[i] = 0;
        F[i] = 0;
        C[i] = WHITE;
        
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
    T = 0;

    for (int i = 0; i < N; i++)
    {
        if (C[i] == WHITE)
        {
            dfs(i);
        }
    }

    /*
    stack<int> *S = new stack<int>;


    S->push(0);
    C[0] = GRAY;
    D[0] = ++time;

    while (S->size() > 0)
    {
        int u = S->top();
        int v = -1;

        // next 
        for (int i = 0; i < N; i++)
        {
            if (M[u][i] == 1)
            {
                if (C[i] == WHITE)
                {
                    v = i;
                    break;
                }
            }
        }

        if (v != -1)
        {
            C[v] = GRAY;
            D[v] = ++time;
            S->push(v);
        }
        else
        {
            S->pop();
            C[u] = BLACK;
            F[u] = ++time;
        }
    }
*/

    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << " " << D[i] << " " << F[i] << endl;
    }
    return 0;
}



