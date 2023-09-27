#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int m, nmin, nmax;
    while(cin >> m >> nmin >> nmax, m){
        vector<int> p(m);
        for(int i = 0 ; i < m ; i++){
            cin >> p[i];
        }
        sort(p.begin(), p.end());

        pair<int, int> ans = make_pair(-1, -1);
        for(int n = nmin ; n <= nmax ; n++){
            ans = max(ans, make_pair(p[m - n] - p[m - n - 1], n));
        }

        cout << ans.second << endl;
    }

    return 0;
}
