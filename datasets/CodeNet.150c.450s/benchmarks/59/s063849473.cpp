#include <iostream>
#include <vector>
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

void insertion_sort(vector<int> &data)
{
    cout << data << endl;

    for (int i = 1; i < data.size(); i++) {
        int key = data[i];
        int j = i - 1;
        for (; j >= 0 && data[j] > key; j--)
            data[j + 1] = data[j];
        data[j + 1] = key;

        cout << data << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> data(n);

    for (int x, i = 0; i < n; i++) {
        cin >> x;
        data[i] = x;
    }
    insertion_sort(data);

    return 0;
}