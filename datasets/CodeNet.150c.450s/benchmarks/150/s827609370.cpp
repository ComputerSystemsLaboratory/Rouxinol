#include <iostream>
#include <vector>

using namespace std;

void counting_sort(vector<size_t> const seq, vector<size_t>* res, size_t k)
{
    vector<size_t> c(k, 0);

    for (auto key : seq)
        c[key]++;
    
    size_t total = 0;
    for (size_t i = 0; i < k; i++) {
        auto old = c[i];
        c[i] = total;
        total += old;
    }

    for (auto key : seq) {
        (*res)[c[key]] = key;
        c[key]++;
    }
}

int main(void)
{
    size_t n, k = 0;
    vector<size_t> seq;

    cin >> n;
    for (size_t i = 0; i < n; i++) {
        size_t x; cin >> x;
        seq.push_back(x);
        if (x > k) k = x;
    }

    vector<size_t> res(n);
    counting_sort(seq, &res, k+1);

    for (size_t i = 0; i < res.size() - 1; i++)
        cout << res[i] << " ";
    cout << res.back() << endl;

    return 0;
}