#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // cinを高速にするためのおまじない
    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    int A=0,W=0,T=0,R=0;
    int N;
    string S;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> S;
        if(S == "AC"){
            A = A+1;
        }else if(S == "WA"){
            W = W+1;
        }else if(S == "TLE"){
            T = T+1;
        }else if(S == "RE"){
            R = R+1;
        }
    }
    cout << "AC x " << A << endl;
    cout << "WA x " << W << endl;
    cout << "TLE x " << T << endl;
    cout << "RE x " << R << endl;
    /////////////////////


    return 0;
}
