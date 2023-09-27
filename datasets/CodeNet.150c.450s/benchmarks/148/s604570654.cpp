#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,a[4]={0};
    string s;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> s;
        switch (s[0]){
        case 'A':
            a[0]++;
            break;
        case 'W':
            a[1]++;
            break;
        case 'T':
            a[2]++;
            break;
        case 'R':
            a[3]++;
            break;
        }
    }
    cout << "AC x " << a[0] << endl << "WA x " << a[1] << endl << "TLE x " << a[2] << endl << "RE x " << a[3] << endl;
}
