#include <iostream>
#include <vector>

using vi = std::vector<int>;

constexpr int nil = 0;

class BinaryHeap
{
public:

    BinaryHeap(int n)
        : nodes(n + 1)
    {}

    ~BinaryHeap() = default;

    int parent(int id) const
    {
        return modifiedIndex(id / 2);
    }

    int left(int id) const
    {
        return modifiedIndex(id * 2);
    }

    int right(int id) const
    {
        return modifiedIndex(id * 2 + 1);
    }

    int size() const
    {
        return nodes.size();
    }

    void show(int id) const
    {
        using namespace std;
        cout << "node " << id << ": key = " << nodes[id] << ", ";
        if (parent(id) != nil) 
            cout << "parent key = " << nodes[parent(id)] << ", ";
        if (left(id) != nil)
            cout << "left key = " << nodes[left(id)] << ", ";
        if (right(id) != nil)
            cout << "right key = " << nodes[right(id)] << ", ";
        cout << endl;
    }

    void show() const
    {
        for (int i = 1; i < nodes.size(); ++i)
        {
            show(i);
        }
    }
 
    const int& operator[](int i) const
    {
        return nodes[i];
    }

    int& operator[](int i)
    {
        return nodes[i];
    }

private:

    vi nodes;

    int modifiedIndex(int i) const
    {
        if (i <= 0 || i >= nodes.size())
            i = nil;
        return i;
    }
};

void solve()
{
    using namespace std;
    int n;
    cin >> n;

    BinaryHeap bh {n};

    for (int i = 1; i <= n; ++i)
    {
        cin >> bh[i];
    }

    bh.show();
}

int main()
{
    solve();
    return 0;
}
