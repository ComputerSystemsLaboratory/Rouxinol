#include<iostream>
using namespace std;

int main(){
    int a=0,b=0;
    string s = "";

    cin >> a >> b;

    if(a>b)
        s = "a > b";
    else if(a<b)
        s = "a < b";
    else
        s = "a == b";

    cout << s << endl;

    return 0;
}