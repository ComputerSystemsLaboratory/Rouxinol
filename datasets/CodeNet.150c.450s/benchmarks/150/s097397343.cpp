#include <bits/stdc++.h>
using namespace std;

vector<int> countingSort(const vector<int>& A) 
{
    const int max = *max_element(A.cbegin(), A.cend());
    vector<int> counter(max+1);
    for (auto a : A) {
        ++counter[a];
    }
    int sumCount = 0;
    for (auto& c : counter) {
        c += sumCount;
        sumCount = c;
    }
    vector<int> B(A.size());

    for (const auto& a : A) {
        B[counter[a]-1] = a;
        --counter[a];
    }
    return B;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);

    for (auto& a : A) {
        cin >> a;
    }
    vector<int> B = countingSort(A);
    for (int i = 0; i < n-1; ++i) {
        cout << B[i] << " ";
    }
    cout << B[n-1] << endl;
}
