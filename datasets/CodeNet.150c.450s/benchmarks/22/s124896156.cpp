//Bellman-Ford
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A&lang=jp
//WithoutUpdate -> TLE
#include <iostream>
#include <vector>
//#include <tuple>
using namespace std;

const int inf = 1001001001;

int main()
{
    int n, m, r;
    bool cycle = true;
    cin >> n >> m >> r;
    int d[n];
    // vector<vector<pair<int,int>> > edge(n);
    //tuple<int, int, int> edge[m];
    int S[m], T[m], D[m];
    for (int i = 0; i < m; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        S[i] = s;
        T[i] = t;
        D[i] = d;
        //edge[i] = make_tuple(s, t, d);
    }
    for (int i = 0; i < n; i++)
    {
        d[i] = inf;
    }
    d[r] = 0;
    //for (int i = 0; i < n - 1; i++)
    for (int i = 0; i < n; i++)
    {
        bool update = false;
        for (int j = 0; j < m; j++)
        {
            /*
            if (d[get<1>(edge[j])] > d[get<0>(edge[j])] + get<2>(edge[j]))
            {
                d[get<1>(edge[j])] = d[get<0>(edge[j])] + get<2>(edge[j]);
            }
            */
            //if (d[T[j]] > d[S[j]] + D[j])
            if (d[T[j]] > d[S[j]] + D[j] && d[S[j]] != inf)
            {
                if (i == n - 1)
                {
                    cycle = false;
                    break;
                }
                d[T[j]] = d[S[j]] + D[j];
                update = true;
            }
        }
        if (!update)
        {
            break;
        }
    }
    if (cycle)
    {
        for (int i = 0; i < n; i++)
        {
            if (d[i] == inf)
            {
                cout << "INF" << endl;
            }
            else
            {
                cout << d[i] << endl;
            }
        }
    }
    else
    {
        cout << "NEGATIVE CYCLE" << endl;
    }

    return 0;
}

