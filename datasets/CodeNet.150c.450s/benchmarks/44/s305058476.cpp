#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(void)
{
    int a[4], b[4], hit, blow;
    
    while(cin >> a[0] >> a[1] >> a[2] >> a[3])
    {
        cin >> b[0] >> b[1] >> b[2] >> b[3];
        
        hit = blow = 0;
        rep(i,4)
        {
            if(a[i] == b[i]) hit++;
            else{
                rep(j,4){
                    if(a[i] == b[j]){
                        blow++;
                        break;
                    }
                }
            }
        }
        cout << hit << " " << blow << endl;
    }

    return 0;
}