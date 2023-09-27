#include <bits/stdc++.h>
using namespace std;
int n;
string s;
string c[4] = {"AC","WA","TLE","RE"};
int a[4];

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<4; j++){
            if(s==c[j]){
                a[j]++;
                break;
            }
        }
    }
    for(int i=0; i<4; i++){
        cout << c[i] << " x " << a[i] << endl;
    }
}
