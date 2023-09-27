#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    int A[100001];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> A[i];
    }
    
    int x = A[n - 1];
    int i =  -1;
    
    for(int j = 0; j < n - 1; ++j){
        if(A[j] <= x){
            ++i;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[n - 1]);
    
    for(int j = 0; j < n; ++j){
        if(j != 0) cout << ' ';
        if(j == i + 1) cout << '[';
        cout << A[j];
        if(j == i + 1) cout << ']';
    }
    cout << endl;
}