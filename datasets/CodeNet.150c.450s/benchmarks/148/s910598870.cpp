#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep2(i,s,n) for(int i = (s);i<(int)(n);i++)

int main(){
    int n;
    cin >> n;
    int a , b , c , d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    string k[n];
    rep(i,n){
        cin >> k[i];
        if(k[i] == "AC")a++;
        else if(k[i] == "WA")b++;
        else if(k[i] == "TLE")c++;
        else d++;
    }
    cout << "AC x " << a << endl;
    cout << "WA x " << b << endl;
    cout << "TLE x " << c << endl;
    cout << "RE x " << d << endl;
}