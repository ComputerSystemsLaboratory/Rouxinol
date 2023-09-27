
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    string tcard, hcard;
    int tcount = 0, hcount = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tcard >> hcard;
        if (tcard == hcard) {
            tcount++;
            hcount++;
        } else if (tcard > hcard) {
            tcount += 3;
        } else {
            hcount += 3;
        }
    }
    cout << tcount << " " << hcount << endl;
    return 0;
}