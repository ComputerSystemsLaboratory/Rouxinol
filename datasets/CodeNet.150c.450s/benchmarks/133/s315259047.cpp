#include<bits/stdc++.h>
using namespace std;

#define type_num 26

int main(){
    int D;
    cin >> D;
    
    vector<int> c(type_num);
    vector<vector<int>> s(D, vector<int>(type_num));
    vector<int> t(D);
    vector<int> last(type_num, 0);
    vector<int> one(type_num, 1);
    for (int i = 0; i < type_num; i++){
        cin >> c[i];
    }

    for (int d = 0; d < D; d++){
        for (int i = 0; i < type_num; i++){
            cin >> s[d][i];
        }
    }

    for (int d = 0; d < D; d++){
        cin >> t[d];
    }

    int S = 0;
    for (int d = 0; d < D; d++){
        int plus_num = s[d][t[d] - 1];
        int minus_num = 0;
        for (int i = 0; i < type_num; i++){
            if (i != t[d] - 1){
                minus_num += c[i] * (d + 1 - last[i]);  
            }
        }
        S += plus_num - minus_num;
        last[t[d] - 1] = d + 1;

        cout << S << endl;
    }
}