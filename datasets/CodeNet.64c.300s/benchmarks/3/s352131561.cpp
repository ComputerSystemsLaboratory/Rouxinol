#include <iostream>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    int ns[n];
    for(int i = 0; i < n; ++i){
        cin >> a;
        ns[i] = a;
    }
    for(int j = 0; j < n; ++j){
        if(j > 0) cout << " ";
        cout << ns[n - j - 1];
    }
    cout << endl;
    return 0;
}