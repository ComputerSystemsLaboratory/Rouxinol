#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, n;
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    long long sum = 0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>x;
        min = std::min(min, x);
        max = std::max(max, x);
        sum+=x;
    }
    cout<<min<<' '<<max<<' '<<sum<<'\n';
    return 0;
}