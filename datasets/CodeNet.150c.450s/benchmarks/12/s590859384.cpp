#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define MAX 300

int main(){
    int H; cin >> H;
    int  b[MAX];
    for(int i = 1; i <= H; i++){
        cin >> b[i];
    }
    for(int i = 1; i <= H; i++){
        cout << "node " << i << ": key = " << b[i] << ", ";
        if(i/2 >= 1) cout << "parent key = " << b[i/2] << ", ";
        if(i*2 <= H) cout << "left key = " << b[i*2] << ", ";
        if(i*2+1 <= H) cout << "right key = " << b[i*2+1] << ", ";
        cout << endl;;
    }
    return 0;
}
