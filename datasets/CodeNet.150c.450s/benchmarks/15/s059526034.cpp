#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> S(n,0);
    for( auto&& x: S){
        cin >> x;
    }

    int q;
    cin >> q;
    vector<int> T(q,0);
    for( auto&& x: T){
        cin >> x;
    }

    int C = 0;
    for(int i=0; i<q; ++i){
        for(int j=0; j<n; ++j){
            if(T[i] == S[j]){
                ++C;
                break;
            }
        }
    }

    cout << C << endl;

}
