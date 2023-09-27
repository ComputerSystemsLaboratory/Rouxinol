#include<iostream>
using namespace std;
#define NIL -1

int n,S[251];

void print(int u, int t){
    cout << "node " << t << ": ";
    cout << "key = " << u << ", ";
    if(t-1) cout << "parent key = " << S[t/2] << ", ";
    if(n>=2*t) cout << "left key = " << S[t*2] << ", ";
    if(n>=2*t+1) cout << "right key = " << S[t*2+1] << ", ";
    
    cout << endl;
}

int main(){
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> S[i];
    }
    
    for(int i=1; i<=n; i++){
        print(S[i], i);
    }
    
    return 0;
}