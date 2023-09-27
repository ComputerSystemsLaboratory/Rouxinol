#include <iostream>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;

int main()
{
    int n,q,v,count=0;;
    cin >> n;
    int s[n];
    REP(i,n){
        cin >> v;
        s[i] = v;
    }
    cin >> q;
    int t[q];
    REP(i,q){
        cin >> v;
        t[i] = v;
    }
    REP(i, q){
        REP(j, n){
            if(t[i] == s[j]) {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}