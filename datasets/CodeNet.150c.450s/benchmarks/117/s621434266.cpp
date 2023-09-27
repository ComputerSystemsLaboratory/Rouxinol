#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

constexpr int SENTINEL = 1000000001;

vector<int> array;
int cnt = 0;

void mergeSort(int begin, int end);

int main()
{
    int n;
    cin >> n;
    array.reserve(n);

    for (auto i = 0; i < n; i++) {
        int in;
        cin >> in;
        array.push_back(in);
    }

    mergeSort(0, n);

    for (auto i = 0; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << array.at(i);
    }
    cout << endl << cnt << endl;

    return 0;
}

void merge(int begin, int mid, int end);

void mergeSort(int begin, int end)
{
    if (begin + 1 < end) {
        int mid = (begin + end) / 2;
        mergeSort(begin, mid);
        mergeSort(mid, end);
        merge(begin, mid, end);
    }
}

void merge(int begin, int mid, int end)
{
    int left_n = mid - begin;
    int right_n = end - mid;
    vector<int> left(left_n + 1), right(right_n + 1);

    for (auto i = 0; i < left_n; i++) {
        left.at(i) = array.at(begin + i);
    }
    left.at(left_n) = SENTINEL;

    for (auto i = 0; i < right_n; i++) {
        right.at(i) = array.at(mid + i);
    }
    right.at(right_n) = SENTINEL;

    for (auto i = 0, j = 0, k = begin; k < end; k++) {
        if (left.at(i) <= right.at(j)) {
            array.at(k) = left.at(i++);
        } else {
            array.at(k) = right.at(j++);
        }
        cnt++;
    }
}