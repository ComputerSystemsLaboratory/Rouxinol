#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string x;
    cin >> a >> b;
    if(a > b){
        x = ">";
    }
    else if(a < b){
        x = "<";
    }
    else{
        x = "==";
    }
    cout << "a " << x << " b" << endl;
    return 0;
}
