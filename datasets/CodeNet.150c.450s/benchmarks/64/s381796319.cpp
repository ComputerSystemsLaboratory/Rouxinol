#include <iostream>
#include <vector>
using namespace std;

bool solve(int n, int* A, int p, int M){
    //cout << "start from " << p << " compared with " << M << endl;
    if (M==0){
        return true;
    }
    if (p<n){
        if (M==0){
            return true;
        }else if (M<0){
            return false;
        }else{
            bool k = solve(n, A, p+1, M) || solve(n, A, p+1, M-A[p]);
            //cout << "returned " << (k?"true":"false") << endl;
            return k;
        }
    }
    return false;
}

int main(){
    int n, q;
    cin >> n;
    int A[n];
    for(int i=0; i<n; ++i){
        cin >> A[i];
    }
    cin >> q;
    int M[q];
    for(int i=0; i<q; ++i){
        cin >> M[i];
    }
    
    for(int i=0; i<q; ++i){
        cout << (solve(n, A, 0, M[i]) ? "yes" : "no") << endl; 
    }
}