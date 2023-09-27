#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n+m){
        vector<pair<int,int>> v;
        int d, p, sum = 0;
        for(int i = 0; i < n; i++){
            cin >> d >> p;
            sum += p*d;
            v.push_back({p,d});
        }
        sort(v.rbegin(), v.rend());

        for(int i = 0; m > 0 && i < n; i++){
            int use = min(m, v[i].second);
            m -= use;
            sum -= use*v[i].first;
        }

        cout << sum << endl;
    }
    return 0;
}
