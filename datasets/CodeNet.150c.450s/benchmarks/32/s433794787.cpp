#include <iostream>
using namespace std;

int main(){
    while(1){
        int m, nmin, nmax;
        cin >> m >> nmin >> nmax;
        if(m==0) break;

        int cur,prev;
        cin >> prev;
        int pmax=0,gmax=0;
        for(int i=1; i<m; i++){
            cin >> cur;
            if(nmin<=i && i<=nmax){
                int gap = prev-cur;
                if(gap >= gmax){
                    gmax = gap;
                    pmax = i;
                }
            }
            prev = cur;
        }
        cout << pmax << endl;
    }
    return 0;
}