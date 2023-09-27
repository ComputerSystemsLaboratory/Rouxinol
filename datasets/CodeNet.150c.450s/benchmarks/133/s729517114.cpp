#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi=3.141592653589793;
typedef unsigned long long ull;
typedef long double ldouble;
const ll INF=1e18;

vector<int> cost(1000000);
vector<vector<int>> data(1000000);


int main(){
    int D;
    ll score = 0;
    vector<ll> c(26);
    
    
    cin >> D;
    for(int i = 0; i < 26; i++){
        cin >> c.at(i);
    }

    vector<vector<ll>> s(D, vector<ll> (26));
    vector<ll> last(26);
    fill(last.begin(), last.end(), 0);

    for(int i = 0; i < D; i++){
        for(int j = 0; j < 26; j++){
            cin >> s.at(i).at(j);
        }
    }

    vector<int> t(D);
    for(ll i = 0; i < D; i++){
        cin >> t.at(i);
        t.at(i)--;
        //cout << "-----" << endl;
        last.at(t.at(i)) = i + 1;
        score += s.at(i).at(t.at(i));
        //cout << score << endl;
        for(int number = 0; number < 26; number++){
            score = score - (ll)(c.at(number) * (i + 1 - last.at(number)));
        }
        cout << score << endl;
        //cout << "-----" << endl;
    }
    
}