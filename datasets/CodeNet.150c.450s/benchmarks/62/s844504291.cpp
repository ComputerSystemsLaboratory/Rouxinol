#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> N(3,0);
    for(auto&& x : N)
        cin >> x;
    
    sort(N.begin(),N.end());
    
    cout << N[0] << ' ' << N[1] << ' ' << N[2] <<'\n';
    
}
