#include<bits/stdc++.h>
using namespace std;

const int MAX = 200000;

int main(){
    int R[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){cin >> R[i];}
    
    int max_margin = -10000000000;
    int minv       = R[0]        ;
    
    for (int i = 1; i < n; i++){
        max_margin = max(max_margin, R[i] - minv);
        minv       = min(minv, R[i]);
    }
    
    cout << max_margin << endl;
    
    return 0;
}
