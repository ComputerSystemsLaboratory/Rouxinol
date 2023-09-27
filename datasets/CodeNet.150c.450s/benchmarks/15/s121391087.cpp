#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i != n; ++i) cin >> S[i];
    int q = 0;
    cin >> q;
    vector<int> T(q);
    for (int i = 0; i != q; ++i) cin >> T[i];
    int counts = 0;
    for (auto ti : T){
        for (auto si : S){
            if (ti == si){
                ++counts;
                break;
            }
        }
    }
    cout << counts << endl;
    return 0;
}