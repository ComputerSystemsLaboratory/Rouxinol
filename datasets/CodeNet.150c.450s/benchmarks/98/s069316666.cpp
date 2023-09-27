#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;

    while(true){
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        if(n == 0&& m == 0) break;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];

        // ??????????????????
        int suma = 0, sumb = 0;
        for(int i=0; i<n; i++) suma += a[i];
        for(int i=0; i<m; i++) sumb += b[i];

        vector<pair<int, int>> res;

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if((suma - a[i] + b[j]) == (sumb - b[j] + a[i])){
                    res.push_back(make_pair(i, j));
                }

        if(res.size() == 0) cout << -1 << endl;
        else{
            int tmpa, tmpb, r = 999999999, tmp;
            for (int i=0; i<res.size(); i++){
                tmp = a[res[i].first] + b[res[i].second];
                if (tmp < r) {
                    r = tmp;
                    tmpa = res[i].first;
                    tmpb = res[i].second;
                }
            }
            cout << a[tmpa] << " " << b[tmpb] << endl;
        }

    }

}