#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> S(13, 0), H(13, 0), C(13, 0), D(13, 0);

    for(int i = 0; i < N; i++){
        char c;
        int v;
        cin >> c >> v;
        switch(c){
            case 'S': S.at(v-1) = 1; break;
            case 'H': H.at(v-1) = 1; break;
            case 'C': C.at(v-1) = 1; break;
            case 'D': D.at(v-1) = 1; break;
        }
    }
    
    for(int i = 0; i < S.size(); i++){
        if(S.at(i) == 0) cout << "S " << (i+1) << endl;
    }
    for(int i = 0; i < H.size(); i++){
        if(H.at(i) == 0) cout << "H " << (i+1) << endl;
    }
    for(int i = 0; i < C.size(); i++){
        if(C.at(i) == 0) cout << "C " << (i+1) << endl;
    }
    for(int i = 0; i < D.size(); i++){
        if(D.at(i) == 0) cout << "D " << (i+1) << endl;
    }
}
