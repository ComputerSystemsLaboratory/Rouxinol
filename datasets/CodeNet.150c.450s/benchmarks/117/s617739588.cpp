#include <iostream>
#include <vector>

using namespace std;

void merge_sort(vector<int>& vec, int left, int right, int& count);

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    int count = 0;
    merge_sort(vec, 0, vec.size() - 1, count);

    cout << vec[0];
    for (int i = 1; i < n; ++i)
        cout << ' ' << vec[i];
    cout << '\n';

    cout << count << '\n';
}

void merge_sort(vector<int>& vec, int left, int right, int& count)
{
    if (left < right) {
        int mid = (left + right) / 2;

        merge_sort(vec, left, mid, count);
        merge_sort(vec, mid + 1, right, count);

        // merge
        int left_size = mid - left + 1;
        int right_size = right - mid;
        vector<int> vec_left(left_size);
        vector<int> vec_right(right_size);
        for (int i = 0; i < left_size; ++i) {
            vec_left[i] = vec[left + i];
        }

        for (int i = 0; i < right_size; ++i) {
            vec_right[i] = vec[mid + 1 + i];
        }

        int i = 0, j = 0, k = left;
        while (i < left_size && j < right_size) {
            if (vec_left[i] < vec_right[j]) {
                vec[k] = vec_left[i];
                ++i;
                ++k;
            } else {
                vec[k] = vec_right[j];
                ++j;
                ++k;
            }
            ++count;
        }

        while (i < left_size) {
            ++count;
            vec[k] = vec_left[i];
            ++i;
            ++k;
        }

        while (j < right_size) {
            ++count;
            vec[k] = vec_right[j];
            ++j;
            ++k;
        }
    }
}

