#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<int, int> A;
    int a;
    long long res = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        res += a;
        auto itr = A.find(a);
        if (itr != A.end())
        {
            A[a]++;
        }
        else
        {
            A[a] = 1;
        }
    }

    int Q;
    cin >> Q;

    int B, C;
    for (int i = 0; i < Q; i++)
    {
        cin >> B >> C;
        auto iter = A.find(B);
        if (iter == A.end())
        {
            cout << res << endl;
            continue;
        }
        //
        auto iterC = A.find(C);
        if (iterC != A.end())
        {
            A[C] += A[B];
        }
        else
        {
            A[C] = A[B];
        }
        res += (C - B) * A[B];
        cout << res << endl;
        A.erase(B);
    }
}
