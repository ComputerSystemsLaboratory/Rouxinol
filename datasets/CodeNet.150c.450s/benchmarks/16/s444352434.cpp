#include <bits/stdc++.h>
#define ll long long

#define INF 999999999

using namespace std;

// input
stack<int> S1;
stack<pair<int, int> > S2;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int  total = 0;
    char c;

    for(int index = 0; cin >> c;index++){
        if (c == '/') {
            if (S1.size() == 0) {
                continue;
            }

            int left = S1.top(); S1.pop();
            int capa = index - left;

            total += capa;

            while(S2.size() != 0 && S2.top().first > left) {
                capa += S2.top().second;
                S2.pop();
            }
            
            S2.push(make_pair(left,capa));
        }
        else if (c == '\\') {
            S1.push(index);
        }
    }

    cout << total << "\n";

    vector<int> anss;

    cout << S2.size();

    while(true){
        if(S2.size() == 0)
            break;

        auto p = S2.top();
        S2.pop();

        anss.push_back(p.second);
    }

    reverse(anss.begin(),anss.end());


    for(auto ans:anss){
        cout << " " << ans;
    }
    cout << "\n";

}
