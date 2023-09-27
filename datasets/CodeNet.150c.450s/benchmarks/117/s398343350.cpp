#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int counts = 0;
const int SENTINEL = 1000000005;

template<typename T>
void merge(vector<T> & A, int left, int mid, int right){
    auto n1 = mid - left;
    auto n2 = right - mid;
    vector<T> L(n1);
    vector<T> R(n2);
    copy(A.begin() + left, A.begin() + mid  , L.begin());
    copy(A.begin() + mid , A.begin() + right, R.begin());
    L.push_back(SENTINEL);
    R.push_back(SENTINEL);
    auto itL = L.begin();
    auto itR = R.begin();
    for (auto itA = A.begin() + left; itA != A.begin() + right; ++itA){
        if (*itL <= *itR){
            *itA = *itL;
            ++itL;
        }else{
            *itA = *itR;
            ++itR;
        }
    }
    counts += right - left;
}

template<typename T>
void merge_sort(vector<T> & A, int left, int right){
    if (left + 1 < right){
        auto mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }
}


int main()
{
    int n = 0;
    cin >> n;
    vector<int> A(n);
    for (auto & element : A) cin >> element;
    merge_sort(A, 0, n);
    cout << *A.begin();
    for (auto it = A.begin() + 1; it != A.end(); ++it) cout << ' ' << *it;
    cout << endl;
    cout << counts << endl;
    return 0;
}