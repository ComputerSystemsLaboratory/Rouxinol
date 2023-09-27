#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> vec(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        int u, k, tmp; cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> tmp;
            vec.at(i).at(tmp-1)=1;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec.at(i).at(j) ;
            if(j!=n-1) cout << " ";
        }
        cout << endl;
    }
    
}
//g++ -o a.exe a.cpp
