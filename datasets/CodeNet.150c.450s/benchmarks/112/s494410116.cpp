#include <bits/stdc++.h>
using namespace std;
string tr;
char c,d,w='\"';
int n,m;
int main(){
    scanf("%d",&n);
    while(n){
        tr = "0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz";
        for(int i = 0; i < n; i++){
            scanf(" %c", &c);
            scanf(" %c", &d);
            tr[c - 48] = d;
        }
        scanf("%d",&m);
        for(int i = 0; i < m; i++){
            scanf(" %c", &c);
            cout << tr[c - 48];
        }
        cout << endl;
        scanf("%d",&n);
    }
    return 0;
}