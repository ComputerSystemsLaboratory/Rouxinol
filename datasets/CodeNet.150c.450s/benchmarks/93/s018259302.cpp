
#include <iostream>
#include <vector>
#include <algorithm>

struct Card
{
    char    suit;
    int     num;

    bool operator==(const Card& other)
    {
        return suit == other.suit && num == other.num;
    }

    bool operator!=(const Card& other)
    {
        return !operator==(other);
    }
};

std::istream& operator>>(std::istream& is, Card& value)
{
    is >> value.suit >> value.num;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Card& value)
{
    os << value.suit << " " << value.num;
    return os;
}

using vc = std::vector<Card>;

void solve();
void QuickSort(vc& target, int iP, int iR);
int Partition(vc& target, int iP, int iR);

int main()
{
    solve();
    return 0;
}


void solve()
{
    using namespace std;

    int n;
    cin >> n;
    vc v(n);

    for (auto& x : v)
        cin >> x;

    auto vs = v;

    QuickSort(v, 0, v.size() - 1);
    stable_sort(vs.begin(), vs.end(), 
        [](Card c1, Card c2)
    {
        return c1.num < c2.num;
    });


    bool stable = true;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] != vs[i])
        {
            stable = false;
            break;
        }
    }

    cout << (stable ? "Stable" : "Not stable") << endl;

    //for (int i = 0; i < v.size(); ++i)
    //{
    //    cout << v[i];
    //    if (i + 1 != v.size())
    //        cout << endl;
    //}

    for (const auto& c : v)
    {
        cout << c << endl;
    }
}

void QuickSort(vc& target, int iP, int iR)
{
    if (iP < iR)
    {
        int q = Partition(target, iP, iR);
        QuickSort(target, iP, q - 1);
        QuickSort(target, q + 1, iR);
    }
}

int Partition(vc& target, int iP, int iR)
{
    using namespace std;

    int x = target[iR].num;
    int i = iP - 1;

    for (int j = iP; j < iR; ++j)
    {
        if (target[j].num <= x)
        {
            swap(target[++i], target[j]);
        }
    }

    swap(target[++i], target[iR]);

    return i;
}
