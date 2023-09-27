#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;
typedef vector<s32> vs32;
typedef vector<u32> vu32;
typedef vector<s64> vs64;
typedef vector<u64> vu64;

const double PI=3.14159265358979323846;

#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

#define rep(i, N) for(int i = 0; i < N; ++i)

#define CEIL(x, y) (((x) + (y) - 1) / (y))
#define MOD 1000000007ULL

class myheap
{
public:
    myheap() {}
    myheap(int size)
    : H(size), cbt(vs32(size + 1, 0))
    {}
    ~myheap() {}
    int parent(int i) { return i / 2; }
    int left(int i) { return 2 * i; }
    int right(int i) {return 2 * i + 1; }

    void maxHeapify(int i)
    {
        int l = left(i);
        int r = right(i);

        int largest;
        if (l <= H && cbt[l] > cbt[i])
        {
            largest = l;
        }
        else
        {
            largest = i;
        }

        if (r <= H && cbt[r] > cbt[largest])
        {
            largest = r;
        }

        if (largest != i)
        {
            swap(cbt[i], cbt[largest]);
            maxHeapify(largest);
        }
    }

    void buildMaxHeap()
    {
        for (int i = (H / 2); i >= 1; --i)
        {
            maxHeapify(i);
        }
    }

    int H;
    vs32 cbt;
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    myheap mheap(n);
    rep (i, n) cin >>  mheap.cbt[i + 1];
    mheap.buildMaxHeap();

    rep (i, n)
    {
        cout << " " << mheap.cbt[i + 1];
    }
    cout << "\n";
    return 0;
}

