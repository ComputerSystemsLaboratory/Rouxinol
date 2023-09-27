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
            if(a==0 || b==0){
                T[a][b] = 0;
            }else if(sa[a-1] == sb[b-1]){
                T[a][b] = 1 + T[a-1][b-1];
            }else{
                T[a][b] = max(T[a][b-1], T[a-1][b]);
            }
        }
    }
    return T[sal][sbl];
}
signed main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> sa >> sb;
        cout << solve() << endl;
    }
}
