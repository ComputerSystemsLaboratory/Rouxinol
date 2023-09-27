#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 20
#define MAX_M 2100

bool solve(vector<int> &A, int i, int m){
    if( i == A.size() )
        return m==0;

    return solve( A, i+1, m-A[i]) || solve( A, i+1, m);
}

int main()
{

    int n;
    cin >> n;
    vector<int> A(n,0);
    for(auto&& x: A){
        cin >> x;
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int m;
        cin >> m;
        cout << (solve(A,0,m) ? "yes" : "no") << endl;
    }

}
