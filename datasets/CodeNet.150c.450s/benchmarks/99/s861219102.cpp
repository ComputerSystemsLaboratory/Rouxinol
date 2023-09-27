#include <iostream>
#include <string>
#include <cctype>

using namespace std;

inline int f(char c){
    return c == 'm'? 1000: c == 'c'? 100: c == 'x'? 10: 1;
}

int encode(string& s){
    int res = 0;
    string t = "";
    for(char c: s){
        if(isdigit(c))t += c;
        else res += (t.empty()? 1: stoi(t)) * f(c), t = "";
    }
    return res;
}

string decode(int n){
    string res = "";
    for(char c: "mcxi"){
        int a = n / f(c);
        res += a == 0? "": (a == 1? "": to_string(a)) + c;
        n %= f(c);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s, t;
        cin >> s >> t;
        cout << decode(encode(s) + encode(t)) << '\n';
    }
    return 0;
}