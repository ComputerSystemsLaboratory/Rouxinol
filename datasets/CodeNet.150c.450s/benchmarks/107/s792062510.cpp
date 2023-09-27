#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int edit_distance(string src, string dst){
    // initializations
    auto ns = src.size();
    auto nd = dst.size();
    vector<int> dp_next(nd + 2);
    vector<int> dp_prev(nd + 2);
    for (int i = 0; i != nd + 1; ++i) dp_prev[i] = i;
    dp_prev[nd + 1] = ns + nd;
    dp_next[nd + 1] = ns + nd;

    // fill dp
    for (int i = 0; i != ns; ++i){
        auto s = src[i];
        dp_next[0] = i + 1;
        for (int j = 0; j != nd; ++j){
            int inc = (s == dst[j]) ? 0 : 1;
            dp_next[j + 1] = min(dp_prev[j] + inc, min(dp_prev[j + 1], dp_next[j]) + 1);
        }
        swap(dp_next, dp_prev);
    }
    
    return dp_prev[nd];
}


int main()
{
    string src;
    string dst;
    cin >> src;
    cin >> dst;
    cout << edit_distance(src, dst) << endl;
    return 0;
}