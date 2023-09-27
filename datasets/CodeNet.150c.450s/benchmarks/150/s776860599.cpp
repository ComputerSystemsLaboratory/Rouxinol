#include <iostream>
#include <vector>
using namespace std;

int MAX_A = 10000;

void countingsort(vector<int> &A, vector<int> &B, int k)
{
    vector<int> C(k,0);

    for(int j=0; j<A.size(); ++j){
        C[A[j]]++;
    }
    for(int i=1; i<k; ++i){
        C[i] = C[i] + C[i-1];
    }
    for(int j=A.size()-1; j>=0; --j){
        B[C[A[j]]-1] = A[j];
        C[A[j]]--;
    }


}

int main()
{
    int n;
    cin >>n;
    vector<int> A(n,0);
    for(int i=0; i<n; ++i){
        cin >> A[i];
    }
    vector<int> B(n,0);
    countingsort(A,B,MAX_A);

    for(int i=0; i<n; ++i){
        if( i > 0)
            cout << ' ';
        cout << B[i];
    }
    cout << endl;

    return 0;
}
