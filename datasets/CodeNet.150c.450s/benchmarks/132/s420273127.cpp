#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t


int main(void){
    while(true){
        int n,p;
        int n_stone[64] = {0};
        cin >> n >> p;
        int index = 0;
        int p_max = p;
        
        if( n == 0 && p == 0 )return 0;
        
        while( true ){
            if( p > 0 ){
                p--;
                n_stone[index]++;
            }else{
                p += n_stone[index];
                n_stone[index]=0;
            }
            
            if( p == 0 && n_stone[index] == p_max ){
                cout << index << endl;
                break;
            }
            
            index = ( index + 1 ) % n;
        }
    }
    
    return 0;
}