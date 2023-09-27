#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi   = vector<int>;
using vll  = vector<long long>;
using vvll  = vector<vll>;
using vvi  = vector<vi>;
using vb   = vector<bool>;
using vvb  = vector<vb>;
using pii  = pair<int,int>;
using vpii = vector<pii>;

int main() {
    int N; cin >> N; 
    vector<string> S(N); for(int i = 0; i < N; i++) cin >> S.at(i);
    int num_AC = 0, num_WA = 0, num_TLE = 0, num_RE = 0;

    for (int i = 0; i < N; i++) {
        if(S.at(i) == "AC") num_AC++;
        else if(S.at(i)=="TLE") num_TLE++;
        else if(S.at(i)=="WA") num_WA++;
        else num_RE++;
    }

    cout << "AC x " << num_AC << endl;
    cout << "WA x " << num_WA << endl;
    cout << "TLE x " << num_TLE << endl;
    cout << "RE x " << num_RE << endl;
    

}