#include <iostream>
#include <string>
#define int long long
//#define _DEBUG
using namespace std;
string sa, sb;
int T[1009][1009];
int solve(){
    int sal = sa.length(), sbl = sb.length();
    for(int a=0; a<=sal; a++){
        for(int b=0; b<=sbl; b++){
            if(a==0){
                T[a][b] = b;
            }else if(b==0){
                T[a][b] = a;
            }else{
                T[a][b] = 
                    min(min(T[a][b-1]+1, T[a-1][b]+1),
                    T[a-1][b-1]+((sa[a-1]==sb[b-1])?0:1));
            }
        }
    }
    return T[sal][sbl];
}
signed main(){
    while(cin >> sa >> sb){
        cout << solve() << endl;
    }
}
