#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define TEST 0 //??\??????????????????(1:??????????????\??? 0:?¨??????\???)
#if TEST
FILE *in = freopen("./Q/A", "r", stdin);
FILE *out = freopen("./A/A", "w", stdout);
#endif

int card[2][50];

int calIndex(int i, int p, int c){
    if(i < c){
        return p+i-1;
    } else if(i < p+c-1){
        return i-c;
    } else {
        return i;
    }
}

void setCard(int n, int turn, int p, int c){
    for(int i = 0; i < n; i++){
        card[turn][i] = card[(turn+1)&1][calIndex(i,p,c)];
    }
}

int main(int argc, const char * argv[]) {
    while(1){
        int n, r; cin >> n >> r;
        if(!n && !r) break;
        
        for(int i = 0; i < n; i++){
            card[1][i] = n-i;
        }
        
        for(int i = 0; i < r; i++){
            int turn = i & 1;
            
            int p, c; cin >> p >> c;
            setCard(n, turn, p, c);
            
        }
        cout << card[(r+1)&1][0] << endl;
        
    }
    
    
#if TEST
    fclose(in);
    fclose(out);
#endif
}