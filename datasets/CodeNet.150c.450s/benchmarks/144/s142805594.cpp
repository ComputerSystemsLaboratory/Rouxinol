#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<long>> A(n, vector<long>(m, 0));
    vector<vector<long>> B(m, vector<long>(l, 0));
    vector<vector<long>> C(n, vector<long>(l, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A.at(i).at(j);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            cin >> B.at(i).at(j);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < m; k++){
                C.at(i).at(j) += A.at(i).at(k) * B.at(k).at(j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        string sep = "";
        for(int j = 0; j < l; j++){
            cout << sep << C.at(i).at(j);
            sep = " ";
        }
        cout << endl;
    }
}
