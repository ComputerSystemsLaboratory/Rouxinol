#include <iostream>
using namespace std;

int main(){
    const int M =13;
    int n,i,x;
    bool s[M] = {0}, h[M] = {0}, c[M] = {0}, d[M] = {0};
    char l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> l >> x;
        if(l == 'S') s[x-1] = 1;
        if(l == 'H') h[x-1] = 1;
        if(l == 'C') c[x-1] = 1;
        if(l == 'D') d[x-1] = 1;
            }
    for(i=0;i<M;i++){
        if(s[i] == 0) cout << "S " << i+1 <<endl;
    }
    for(i=0;i<M;i++){
        if(h[i] == 0) cout << "H " << i+1 <<endl;
    }
    for(i=0;i<M;i++){
        if(c[i] == 0) cout << "C " << i+1 <<endl;
    }
    for(i=0;i<M;i++){
        if(d[i] == 0) cout << "D " << i+1 <<endl;
    }
    
    return 0;
}