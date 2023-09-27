#include <iostream>
#include <limits>
#include <utility>
#include <vector>

void merge(std::vector<std::pair<char, int> > &s, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    std::vector<std::pair<char, int> > L(n1+1);
    std::vector<std::pair<char, int> > R(n2+1);

    for (int i = 0; i < n1; i++) {
        L[i] = s[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = s[mid + i];
    }
    L[n1] = std::pair<char, int>('L', std::numeric_limits<int>::max());
    R[n2] = std::pair<char, int>('R', std::numeric_limits<int>::max());

    int i = 0;
    int j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].second <= R[j].second) {
            s[k] = L[i];
            i++;
        }
        else {
            s[k] = R[j];
            j++;
        }
    }

}

void mergesort(std::vector<std::pair<char, int> > &s, int left, int right)
{
    if (left + 1 < right) {
        int mid = left + (right - left) / 2;
        mergesort(s, left, mid);
        mergesort(s, mid, right);
        merge(s, left, mid, right);
    }
}

int partition(std::vector<std::pair<char, int> > &v, int left, int right)
{
    std::pair<char, int> pivot = v[right];
    int index = left - 1;
    std::pair<char, int> tmp;

    for (int i = left; i < right; i++) {
        if (v[i].second <= pivot.second) {
            index++;
            tmp = v[i];
            v[i] = v[index];
            v[index] = tmp;
        }
    }

    tmp = v[index + 1];
    v[index + 1] = v[right];
    v[right] = tmp;

    return index + 1;
}

void quicksort(std::vector<std::pair<char, int> > &v, int left, int right)
{
    if (left < right) {
        int pivot = partition(v, left, right);
        quicksort(v, left, pivot - 1);
        quicksort(v, pivot + 1, right);
    }
}

bool isstable(std::vector<std::pair<char, int> > &stable, std::vector<std::pair<char, int> > &array)
{
    for (int i = 0; i < array.size(); i++) {
        if (stable[i].first != array[i].first)
            return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<std::pair<char, int> > vq(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vq[i].first >> vq[i].second;
    }

    std::vector<std::pair<char, int> > vm = vq;

    quicksort(vq, 0, n - 1);
    mergesort(vm, 0, n);

    // judge stability
    if (isstable(vm, vq))
        std::cout << "Stable" << std::endl;
    else
        std::cout << "Not stable" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << vq[i].first << " " << vq[i].second << std::endl;
    }

    return 0;
}