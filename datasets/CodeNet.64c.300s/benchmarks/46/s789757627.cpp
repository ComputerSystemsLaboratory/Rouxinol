#include <bits/stdc++.h>
using namespace std;
#define N_PRIME 1000000007
#define ll int64_t

#define N 1000010
bool p[N];

void solve(){
    int count = 0;
    int a,b,n;
    cin >> a >> b >> n;
    
    if( a == 0 && b == 0 && n == 0 )exit(0);
    
    //cout << a << " " << b << " " << n << " ";
    
    for(int i = 0 ; i < N ; i++){
        if( p[a+b*i] )
            count++;
        
        if( count == n ){
            //cout << count << " lll " << n << endl;
            cout << a+b*i << endl;
            return;
        }
    }
    
    return;
}

int main(void){
    for(int i = 0 ; i < N ; i++ )
        p[i] = true;
    
    p[0] = p[1] = false;
    for(int i = 2 ; i < N ; i++ ){
        if( p[i] ){
            for(int j = 2*i ; j < N ; j+= i){
                p[j] = false;
            }
        }
    }
    
    while(true)solve();
    return 0;
}