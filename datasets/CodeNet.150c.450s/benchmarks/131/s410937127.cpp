#include <bits/stdc++.h>
using namespace std;

// input
// a[0] L

// output
//    j where i is the smallest number that safisfies the condition
//            a[i] = a[j] (i > j)
//    a[i]
//    i - j

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<string> a;
    int L;
    while(true){
        a.clear();
        a.resize(25);
        cin >> a[0] >> L;
        if(a[0] == "0" && L == 0) break;
        for(int _ = L - a[0].size(); _ > 0; _--){
            a[0].push_back('0');
        }
        int i, j;
        bool found = false;
        i = 1;
        stringstream ss;
        for(; i < 25; i++){
            string t(a[i-1]);
            sort(t.begin(), t.end());
            string min_ai(t), max_ai(t);
            reverse(max_ai.begin(), max_ai.end());
            int min_n, max_n;
            ss.clear();
            ss << min_ai;
            ss >> min_n;
            ss.clear();
            ss << max_ai;
            ss >> max_n;
            ss.clear();
            ss << (max_n - min_n);
            ss >> a[i];
            for(int _ = L - a[i].size(); _ > 0; _--){
                a[i].insert(0, 1, '0');
            }
            for(j = 0; j < i; j++){
                if(a[j] == a[i]){
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        int ans;
        ss.clear();
        ss << a[i];
        ss >> ans;
        cout << j << ' ' << ans << ' ' << (i - j) << endl;
    }
    return 0;
}