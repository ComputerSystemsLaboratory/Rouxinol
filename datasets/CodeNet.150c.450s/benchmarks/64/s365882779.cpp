#include <iostream>
#include <vector>

using namespace std;

bool solve(int i,int m , vector<int> &v){
    if (m == 0 )return true;
    if (i >= v.size()) return false;
    return solve(i+1,m,v) || solve(i+1,m - v[i],v);
}

int main(){
    int n,q;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> q;
    for (int i = 0; i < q; ++i) {
        int s;
        cin >> s;
        string result = solve(0,s,v) ? "yes":"no";
        cout << result << endl;
    }
    return 0;
}