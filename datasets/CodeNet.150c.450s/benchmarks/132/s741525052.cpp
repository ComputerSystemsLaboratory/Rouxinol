#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, p;
    while(cin >> n >> p && n && p) {
        int step = 0, wan = p;
        int have[n];
        fill(have, have + n, 0);
        while(true) {
            if(have[step % n] == p) 
                break;
            
            if(wan > 0) {
                have[step % n]++;
                wan--;
            } else {
                wan = have[step % n];
                have[step % n] = 0;
            }
            step++;
        }
        cout << (step % n) << endl;
    }
}