//ALDS1_4_A Search - Linear Search
#include <iostream>
#include <vector>
using namespace std;

int linierceach(vector<int> &V, int key)
{
    V[V.size() - 1] = key;
    int i = 0;
    while (V[i] != key)
    {
        if (i == V.size() - 2)
            return 0;
        i++;
    }
    return 1;
}

int main()
{
    vector<int> S, T;
    int n, q, t;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        S.push_back(t);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> t;
        T.push_back(t);
    }
    S.push_back(0);
    int sum = 0;
    for (auto a : T)
    {
        sum += linierceach(S, a);
    }
    cout << sum << endl;

    return 0;
}
