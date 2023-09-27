#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    string x = "No";
    cin >> a >> b >> c;
    if(a < b && b < c){
        x = "Yes";
    }
    cout << x << endl;
    return 0;
}
