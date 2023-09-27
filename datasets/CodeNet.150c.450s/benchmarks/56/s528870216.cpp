#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n,0);
    for(auto&& x: v)
        cin >> x;

    long long min = *(min_element(v.cbegin(),v.cend()));
    long long max = *(max_element(v.cbegin(),v.cend()));
    long long acc = accumulate(v.cbegin(),v.cend(),0LL);

    cout << min << ' ' << max << ' ' << acc << '\n';

    return 0;
}
