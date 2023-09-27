#include <bits/stdc++.h>
using namespace std;
int main(void){
    int w, s[31], n, a, b;
    cin >> w >> n;
    for(int i=1; i<=w; i++){
        s[i]=i;
    }
    while(n--){
        scanf("%d,%d", &a, &b);
        swap(s[a], s[b]);
    }
    for(int i=1; i<=w; i++){
        cout << s[i] << "\n";
    }
}

