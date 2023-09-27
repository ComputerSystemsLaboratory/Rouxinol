#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a>>b>>c;
    string ans ="";
    if(a<b && b<c)ans ="Yes";
    else ans="No";

    cout << ans<< endl;
return 0;
}
