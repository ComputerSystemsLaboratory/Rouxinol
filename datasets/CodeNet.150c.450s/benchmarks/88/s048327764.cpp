#include <iostream>
#include <cmath>
using namespace std;

int main(){
    while(1){
        int h,w;
        cin >> h >> w;
        if(h==0) break;

        int diag = h*h + w*w;
        for(int d=diag; d!=-1; d++){
            for(int i=1; 2*i*i<d; i++){
                int rem=d-i*i;
                int sqrem=sqrt(rem);
                if(sqrem*sqrem == rem){
                    if(d==diag && i<=h) continue;
                    cout << i << " " << sqrem << endl;
                    d = -2;
                    break;
                }
            }
        }
    }
    return 0;
}