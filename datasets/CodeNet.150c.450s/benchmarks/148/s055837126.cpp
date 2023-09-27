#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;


template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main(){
    int a,b,c,d;
    vector<int> S(4, 0);
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        if(s == "AC"){
            ++S[0];
        }
        else if(s == "WA"){
            ++S[1];
        }
        else if(s == "TLE"){
            ++S[2];
        }
        else{
            ++S[3];
        }
    }

    cout << "AC x " << S[0] << endl;
    cout << "WA x " << S[1] << endl;
    cout << "TLE x " << S[2] << endl;
    cout << "RE x " << S[3] << endl;
    return 0;
}