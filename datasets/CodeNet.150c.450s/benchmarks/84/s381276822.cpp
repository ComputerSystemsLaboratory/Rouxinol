#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int SENTINEL = 1000000005;

long long merge(vector<int> & a, int left, int mid, int right){
    auto n1 = mid - left;
    auto n2 = right - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    copy(a.begin()+left, a.begin()+mid, L.begin());
    copy(a.begin()+mid, a.begin()+right, R.begin());
    L.push_back(SENTINEL);
    R.push_back(SENTINEL);
    long long counts = 0;
    int iL = 0;
    int iR = 0;
    for (int i = left; i != right; ++i){
        if (L[iL] > R[iR]){
            a[i] = R[iR];
            ++iR;
            counts += n1 - iL;
        }else{
            a[i] = L[iL];
            ++iL;
        }
    }
    return counts;
}


long long count_inversion(vector<int> & a, int left, int right){
    long long counts = 0;
    if (left + 1 < right){
        int mid = (left + right) / 2;
        counts += count_inversion(a, left, mid);
        counts += count_inversion(a, mid, right);
        counts += merge(a, left, mid, right);
    }
    return counts;
}


int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto & elem : a) cin >> elem;
    cout << count_inversion(a, 0, n) << endl;
    return 0;
}