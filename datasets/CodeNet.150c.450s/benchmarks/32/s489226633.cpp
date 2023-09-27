#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;
int m,mmin,mmax,check;
int psa,sa;
vector<int> mem;

int main()  {
    while(1) {
        sa = 0;
        cin >> m >> mmin >> mmax;
        if(m==0) break;
        vector<int> mem(m,0);
        for(int i = 0;i < m;i++) {
            cin >> mem[i];
        }
        for(int i = mmin-1;i < mmax;i++) {
            //cout << i << endl;
            psa = mem[i] - mem[i+1];
            //cout << psa ;
            if(psa >= sa) {
                check = i;
                sa = psa;
            }
        }
        cout << check+1 << endl;
    }
    return 0;
}
