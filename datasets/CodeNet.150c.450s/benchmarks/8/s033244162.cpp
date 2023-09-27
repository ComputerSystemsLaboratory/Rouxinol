#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n;
    string Tcard, Hcard;
    int Tpoint, Hpoint;
    
    cin >> n;
    Tpoint = 0;
    Hpoint = 0;
    for(int i = 0; i < n; ++i) {
        cin >> Tcard >> Hcard;
        
        if(Tcard > Hcard) {
            Tpoint += 3;
        } else if(Tcard < Hcard) {
            Hpoint += 3;
        } else {
            ++Tpoint;
            ++Hpoint;
        }
    }
    
    cout << Tpoint << ' ' << Hpoint << endl;
    
    return 0;
}

