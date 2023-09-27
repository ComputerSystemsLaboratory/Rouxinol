#include <iostream>
#include <vector>

using vi = std::vector<int>;

int Partition(vi& target, int iP, int iR);
void solve();

int main()
{
    solve();
    return 0;
}

int Partition(vi& target, int iP, int iR)
{
    using namespace std;

    int x = target[iR];
    int i = iP - 1;

    for (int j = iP; j < iR; ++j)
    {
        if (target[j] <= x)
        {
            swap(target[++i], target[j]);
        }
    }
    
    swap(target[++i], target[iR]);

    return i;
}

void solve()
{
    using namespace std;

    int n;
    cin >> n;
    vi v(n);

    for (auto& x : v)
        cin >> x;

    int index = Partition(v, 0, v.size() - 1);

    for (int i = 0; i < v.size(); ++i)
    {
        if (i == index)
            cout << "[" << v[i] << "]";
        else
            cout << v[i];

        if (i + 1 != v.size())
            cout << " ";
    }

    cout << endl;
}
