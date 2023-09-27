#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> S, int t){
    for(int i=0; i<S.size(); ++i){
        if(S[i] == t){
            return true;
        }
    }

    return false;
}

int main(){
    int N; cin >> N;
    vector<int> S(N);
    for(int i=0; i<N; ++i){
        cin >> S[i];
    }

    int q; cin >> q;
    vector<int> T(q);
    for(int i=0; i<q; ++i){
        cin >> T[i];
    }

    int count = 0;

    for(int i=0; i<q; ++i){
        if(linearSearch(S, T[i])) count++;
    }
    
    cout << count << endl;
}
