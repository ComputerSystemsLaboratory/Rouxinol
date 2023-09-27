#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    int a;
    int count = 0;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        bool check = true;
        cin >> a;
        for(int j = 2; j <= sqrt(a); ++j) {
            if(a % j == 0) {
                check = false;
            }
        }
        if(check)   ++count;
    }
    cout << count << endl;
    
    return 0;
}
