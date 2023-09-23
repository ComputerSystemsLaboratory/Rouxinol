#include <utility>
#include <cstdio>
#include <cmath>
#include <climits>
#include <iostream>
using namespace std;

//---- How many ways?
int main(void){
    while(1){
        int n, x, cnt=0;
        cin >> n >> x;
        if(n==0 && x==0){break;}
        for(int s=1; s<=n; s++){
            for(int m=s+1; m<(x-s+1)/2; m++){
                //cout << "s:" << s << endl << "m:" << m << endl;
                int l=x-s-m;
                if(s<=n && m<=n && l<=n){
                    cnt+=1;
                    //cout << s << m << l << endl;
                }
                
            }
        }
        cout << cnt << endl;
    }
    return 0;
}