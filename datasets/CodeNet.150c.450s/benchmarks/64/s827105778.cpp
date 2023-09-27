#include <iostream>
using namespace std;

int n;
int q;
int A[2000];
int m[2000];
int i;

bool solve (int i, int m){
    if (m==0) return true;
    if (i > n) return false;
    bool res;
    res = solve(i+1, m) | solve(i+1, m-A[i]);
    return res;
    }




int main(){
    cin >>  n ;
    for (i=0; i < n; i++){
        cin >>  A[i] ;
    }

    cin >>  q ;
    for (i=0; i < q; i++){
        cin >>  m[i] ;
    }

    for (i = 0; i < q; i++){
        if (solve(0, m[i])){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}