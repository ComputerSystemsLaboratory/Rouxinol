#include <math.h>
#include <ctype.h>
#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define REP(i, n) for(int i = 0; i < n; i++)
struct omt{omt(){ios::sync_with_stdio(false);cin.tie(0);}}star;

bool binary_search(int x, vector<int> A){
    int l = 0, r = 10, mid;
    while(l < r){
        mid = (l + r) / 2;
        if(x == A[mid]) return true;
        else if(x < A[mid]) r = mid;
        else if(A[mid] < x) l = mid + 1;
    }
    return false;
}

int main(){
    vector<int> A;
    REP(i, 10) A.push_back(i);

    int n;
    while(cin >> n){
        int cnt = 0;
        REP(i, 10){
            REP(j, 10){
                REP(k, 10){
                    int hoge = n - (i + j + k);
                    if(binary_search(hoge, A)) cnt++;
                }
            }
        }
        cout << cnt << endl;
    }


    return 0;
}
