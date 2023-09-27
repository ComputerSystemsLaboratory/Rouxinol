#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

#define FOR(i,a,b) for(int i=int(a);i<int(b);++i)
#define RFOR(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)

int main()
{
    string W, T;
    int cnt, l;
    cin >> W;
    cnt = 0;
    l = W.size();
    REP(i,l) if (isupper(W[i])) W[i] = tolower(W[i]);
    while(cin >> T) {
        if (T == "END_OF_TEXT") break;
        REP(i,l) if (isupper(T[i])) T[i] = tolower(T[i]);
        if (W == T) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}

