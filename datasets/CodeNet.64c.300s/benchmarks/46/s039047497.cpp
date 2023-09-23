#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <stack>
using namespace std;

int a, d, n;
bool Era[1000001];
int main() {
    Era[0] = Era[1] = false;
    for(int i=2; i<=1000001; ++i) Era[i]=true;
    
    for(int i=2; i*i < 1000001; ++i){
        if(Era[i]){
            for(int j=0; i*(j+2)< 1000001; j++){
                Era[i*(j+2)]= false;
            }
        }
    }   
    while(cin >> a >> d >> n, a||d||n){
        int num = a, cnt=0;
        
        while(cnt!=n){
            if(Era[num]) cnt++;
            num += d;
        }
        cout << num-d << endl;
    }
        
    return 0;
}
