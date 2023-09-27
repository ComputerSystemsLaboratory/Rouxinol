#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using vi = std::vector<int>;

constexpr int nil {0};

constexpr int inf {1<<30};

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

    ~MaximumHeap() = default;

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

class PriorityQueue : public MaximumHeap
{
public:

    PriorityQueue()
        : MaximumHeap(0)
    {}

    ~PriorityQueue() = default;

    void insert(int key)
    {
        if (nodes.size() == lastIndex + 1)
        {
            nodes.push_back(key);
            ++lastIndex;
        }
        else
            nodes[++lastIndex] = key;
        
        int i {lastIndex};

        while (parent(i) > nil && nodes[i] > nodes[parent(i)])
        {
            std::swap(nodes[i], nodes[parent(i)]);
            i = parent(i);
        }

    }

    int extractMax()
    {
        if (lastIndex == 0)
            return -inf;

        int max = nodes[1];
        nodes[1] = nodes[lastIndex];
        nodes[lastIndex--] = -inf;
        maxHeapify(1);

        return max;
    }

private:

    int lastIndex {0};
};

void solve()
{
    using namespace std;
    string s;
    PriorityQueue pq;

    while (true)
    {
        cin >> s;
        int key;

        if (s == "insert")
        {
            cin >> key;
            pq.insert(key);
        }
        else if (s == "extract")
        {
            int max = pq.extractMax();
            cout << max << endl;
        }
        else if(s == "end")
            break;
    }
}

int main()
{
    solve();
    return 0;
}
