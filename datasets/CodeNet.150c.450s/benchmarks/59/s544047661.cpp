#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(auto &i : A) cin >> i;
    
    for(auto e = A.begin() + 1; e != A.end()+1; e++){
        sort(A.begin(), e);
        for(int i = 0; i < N-1; i++){
            cout << A[i] << " ";
        }
        cout << A[N-1] << endl;
    }
    
    return 0;
}