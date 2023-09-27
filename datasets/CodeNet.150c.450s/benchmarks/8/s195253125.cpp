#include <iostream>
#include <string>
using namespace std;

int main(void){

    int n, leftPoint = 0, rightPoint = 0;
    string leftStr, rightStr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> leftStr >> rightStr;
        if (leftStr == rightStr) {
            leftPoint++;
            rightPoint++;
        } else if (leftStr > rightStr) {
            leftPoint += 3;
        } else {
            rightPoint += 3;
        }
    }
    cout << leftPoint << " " << rightPoint << endl;
    return 0;
}