#include <iostream>
using namespace std;

int main(){
    int n,x;
    int A[10001] ={0};
    cin >> n;

    for (int i = 0; i < n ; ++i) {
        cin >> x;
        A[x]++;
    }
    bool s = false;
    for (int i = 0; i <= 10000 ; ++i) {
        for (int j = 0; j < A[i] ; ++j) {
            if(s) cout << " ";
            else s = true;
            cout << i;
        }
    }
    cout << endl;
    return 0;
}