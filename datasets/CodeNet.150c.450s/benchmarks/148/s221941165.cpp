#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        m[s]++;
    }
    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;
    return 0;
}