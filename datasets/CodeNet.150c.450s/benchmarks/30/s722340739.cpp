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

int selection_sort_counter(vector<int> &a)
{
    int count = 0;

    for (int i = 0; i < a.size(); i++) {
        int mini = i;
        for (int j = i; j < a.size(); j++)
            if (a[j] < a[mini])
                mini = j;
        if (i != mini) {
            swap(a[i], a[mini]);
            count++;
        }
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

    count = selection_sort_counter(array);

    cout << array << endl;
    cout << count << endl;

    return 0;
}