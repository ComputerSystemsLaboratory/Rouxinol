#include <iostream>
#include <utility>
#include <string>
#include <queue>
using namespace std;
typedef pair<string, int> psi;

int q;
queue<psi> Q;

void process()
{
    int time = 0;

    while (!Q.empty())
    {
        psi work = Q.front();
        Q.pop();

        if (work.second > q)
        {
            time += q;
            work.second -= q;
            Q.push(work);
        }
        else
        {
            time += work.second;
            cout << work.first << " " << time << endl;
        }
    }
    return;
}

int main()
{
    int n;
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
    {
        string s;
        int p;
        cin >> s >> p;
        Q.push(make_pair(s, p));
    }
    process();
}
