#include<iostream>
using namespace std;

int A[20];
int n, q;

bool solve(int p, int t)
{
    if(p == n) return false;
     if(t == 0 || A[p] == t) return true;

    if(A[p] > t) return solve(p + 1, t);
    return solve(p + 1, t) || solve(p + 1, t - A[p]);
}

int main()
{
    int i, m;
    cin >> n;
    for(i = 0; i < n; i++) cin >> A[i];
    cin >> q;
    for(i = 0; i < q; i++){
        cin >> m;
        if(solve(0, m)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}