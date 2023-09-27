#include <iostream>
#include <cstdio>
using namespace std;

int ans = 0;

int r(int,int);

int main(){
    int n;
    while(-1!=scanf("%d", &n)){
        ans = 0;
        r(4,n);
        cout << ans << endl;
    }
    return 0;
}

int r(int d,int n){
    if(n==0){
        ans++;
        return 0;
    }
    if(n<0 || d <= 0) return 0;

    for(int i=0; i<=9; i++){
        r(d-1, n-i);
    }
    return 0;
}