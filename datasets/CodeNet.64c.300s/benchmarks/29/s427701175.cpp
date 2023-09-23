#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    for(;;){
        int e;
        int ans=1000000;
        cin >> e;
        if (e==0) {
            break;
        }
        for (int z=0;e-z*z*z>=0 ; z++) {
            for (int y=0; e-z*z*z-y*y>=0; y++) {
                ans=min(ans,e-z*z*z-y*y +y+z);
            }
        }
        cout<<ans<<"\n";
    }
}