#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, c0, c1, c2, c3;
    string s;
    cin >> n;
    c0 = c1 = c2 = c3 = 0;
    for(int i = 0;i<n;i++){
        cin >> s;
        if(s=="AC") c0++;
        if(s=="WA") c1++;
        if(s=="TLE") c2++;
        if(s=="RE") c3++;
    }
    cout << "AC x " << c0 << endl;
    cout << "WA x " << c1 << endl;
    cout << "TLE x " << c2 << endl;
    cout << "RE x " << c3 << endl;
}