#include <iostream>
#include <vector>
#include <algorithm>

using vi = std::vector<int>;

constexpr int nil = 0;

class BinaryHeap
{
public:

    BinaryHeap(int n)
        : nodes(n + 1)
    {}

    virtual ~BinaryHeap() = default;

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

protected:

    vi nodes;

    int modifiedIndex(int i) const
    {
        if (i <= 0 || i >= nodes.size())
            i = nil;
        return i;
    }
};

class MaximumHeap : public BinaryHeap
{
public:

    using BinaryHeap::BinaryHeap;

    virtual ~MaximumHeap() = default;

    void maxHeapify(int i)
    {
        auto l = left(i);
        auto r = right(i);
        int largest;

        if (l < nodes.size() && l > nil && nodes[l] > nodes[i])
            largest = l;
        else
            largest = i;
        if (r < nodes.size() && r > nil && nodes[r] > nodes[largest])
            largest = r;

        if (largest != i)
        {
            std::swap(nodes[i], nodes[largest]);
            maxHeapify(largest);
        }
    }

    void buildMaxHeap()
    {
        for (int i = (nodes.size() - 1) / 2; i >= 1; --i)
            maxHeapify(i);
    }
};

void solve()
{
    using namespace std;
    int n;
    cin >> n;

    MaximumHeap mh {n};

    for (int i = 1; i <= n; ++i)
    {
        cin >> mh[i];
    }

    mh.buildMaxHeap();
    for (int i = 1; i <= n; ++i)
    {
        cout << " " << mh[i];
    }

    cout << endl;
}

int main()
{
    solve();
    return 0;
}
