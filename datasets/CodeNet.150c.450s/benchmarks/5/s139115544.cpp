#include<iostream>
using namespace std;

int main(){
    int n;
    int an[100];
    cin >> n;
    for (int x = 0; x < n; x++) cin >> an[x];
    
    for (int x = n -1 ; x >= 0; x--) {
        if (x != n -1) cout << " ";
        cout   << an[x];
    }
    cout << endl;
   
    return 0;
}