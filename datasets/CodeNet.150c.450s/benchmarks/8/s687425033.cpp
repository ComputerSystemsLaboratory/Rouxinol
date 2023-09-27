#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main() {
    int pTarou = 0, pHanako = 0, n;
    string sTarou, sHanako;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> sTarou >> sHanako;
        if (sTarou > sHanako) pTarou += 3;
        else if (sTarou < sHanako) pHanako += 3;
        else if (sTarou == sHanako){
            pTarou++;
            pHanako++;
        }
    }

    cout << pTarou << " " << pHanako << endl;

    return 0;
}