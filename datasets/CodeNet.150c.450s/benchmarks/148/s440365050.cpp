#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    
    int i, N, AC, WA, TLE, RE;
    cin >> N;
    AC = 0;
    WA = 0;
    TLE = 0;
    RE = 0;
    
    string S;
    
    for (i = 0; i < N; i++){
        
        cin >> S;
        if (S == "AC"){
            AC++;
        } else if (S == "WA"){
            WA++;
        } else if (S == "TLE"){
            TLE++;
        } else if (S == "RE"){
            RE++;
        } else {
            
        }
    }
    
    cout << "AC x " << AC << "\n";
    cout << "WA x " << WA << "\n";
    cout << "TLE x " << TLE << "\n";
    cout << "RE x " << RE << "\n";

    return 0;
}

