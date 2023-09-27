#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t


int main(void){
    
    while(true){
        int n;
        int max_v = INT_MIN;
        int min_v = INT_MAX;
        int sum = 0;
        cin >> n;
        
        if( n == 0 )return 0;
        
        for(int i = 0 ; i < n ; i++ ){
            int temp;
            cin >> temp;
            sum += temp;
            max_v = max(max_v,temp);
            min_v = min(min_v,temp);
        }
        
        sum -= max_v;
        sum -= min_v;
        
        cout << sum / (n-2) << endl;
    }
    
    return 0;
}