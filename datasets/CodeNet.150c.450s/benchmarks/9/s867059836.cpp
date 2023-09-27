#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string Shf(string s, int n){
    string t = s.substr(0,n);
    s.erase(0,n);
    s += t;
    return s;
}
int main(){
    string s;
    int m,n;
    while(1){
        cin >> s;
        if (s == "-") break;
        cin >> m;
        for(int i = 0;i < m; i++){
            cin >> n;
            s = Shf(s,n);
        }
        cout << s << endl;
    }
    return 0;
}
