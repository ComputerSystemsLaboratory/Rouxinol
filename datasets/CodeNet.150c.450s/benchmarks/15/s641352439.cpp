#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(const vector<int> &A, int key){
    int n = A.size();
    int i = 0;
    while(i < n){
        if(A[i] == key)
            return 1;
        ++i;
    }
    return 0;
}
int main(void){
    int n, q, key;
    cin >> n;
    vector<int> S(n, 0);
    for(int i = 0; i < n; ++i)
        cin >> S[i];
    cin >> q;
    int sum = 0;
    for(int i = 0; i < q; ++i){
        cin >> key;
        sum += LinearSearch(S, key);
    }
    cout << sum << endl;
    return 0;
}