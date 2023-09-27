#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

static const int N = 100;

int main(){
    int n;
    vector<int> p(N+1);
    vector<vector<int>> m(N+1, vector<int>(N+1, 0));
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> p.at(i - 1) >> p.at(i);
    }
    for(int l = 2; l <= n; l++){
        for(int i = 1; i <= n - l + 1; i++){
            int j = i + l - 1;
            m.at(i).at(j) = (1 << 21);
            for(int k = i; k <= j - 1; k++){
                m.at(i).at(j) = min(m.at(i).at(j), m.at(i).at(k) + m.at(k + 1).at(j) + p.at(i - 1) * p.at(k) * p.at(j));
            }
        }
    }
    cout << m.at(1).at(n) << endl;


}


