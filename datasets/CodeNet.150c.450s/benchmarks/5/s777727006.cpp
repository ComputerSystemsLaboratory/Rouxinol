#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v(N,0);
    for(auto&& x: v)
        cin >> x;

    reverse(v.begin(), v.end());

    for(int i=0; i<N; ++i){
        cout << v[i];
        if( i!= N-1)
            cout << ' ';
    }
    cout << endl;
    return 0;
}

