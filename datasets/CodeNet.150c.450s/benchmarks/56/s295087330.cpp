#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<long> a;
    int i,n;
    long long tmp,sum = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
        sum += tmp;
    }
    sort(a.begin(),a.end());

    cout << a[0] << ' ' << a[i -1] << ' ' << sum << endl;
}