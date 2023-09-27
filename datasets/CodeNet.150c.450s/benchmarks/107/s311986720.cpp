#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<vector<int> > LP(1010, vector<int>(1010, 0));

int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 1; i <= s.size(); i++){
        LP[i][0] = i;
    }
    for(int i = 1; i <= t.size(); i++){
        LP[0][i] = i;
    }

    for(int i = 1; i <= s.size(); i++){
        for(int l = 1; l <= t.size(); l++){
            int mid = min(LP[i-1][l] + 1, LP[i][l-1] + 1);
            if(s[i-1] == t[l-1]){ //文字列の配列参照してるから添え字違う 最後の文字
                mid = min(mid, LP[i-1][l-1]);
            }else{
                mid = min(mid, LP[i-1][l-1] + 1);
            }
            LP[i][l] = mid;
        }
    }
    cout << LP[s.size()][t.size()] << endl;
}
