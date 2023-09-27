#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
    if (v.size()) {
        os << v.front();
        for (auto vi = v.begin() + 1; vi != v.end(); vi++)
            os << " " << *vi;
    }
    return os;
}

int bubble_count(vector<int> &a)
{
    int count = 0;

    for (int i = 0; i < a.size() - 1; i++)
        for (int j = a.size() - 1; j > i; j--)
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                count++;
            }

    return count;
}

int main()
{
    int n, count;
    cin >> n;
    vector<int> array(n);

    for (int x, i = 0; i < n && cin >> x; i++)
        array[i] = x;

    count = bubble_count(array);

    cout << array << endl;
    cout << count << endl;

    return 0;
}