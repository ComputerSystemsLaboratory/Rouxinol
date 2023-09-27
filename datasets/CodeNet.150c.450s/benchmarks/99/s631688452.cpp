#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

map<string, int> m;


string IntToString(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

int sti(string input){
    int num = 0;
    for(int i=0; i < input.size(); i++){
        const char *c = input.substr(i, 1).c_str();
        if(isalpha(*c)){
            num += m[input.substr(i,1)];
        }
        else {
            int a = atoi(input.substr(i, 1).c_str());
            num += a*m[input.substr(i+1,1)];
            i++;
        }
    }
    return num;
}

string its(int num){
    string r;
    if(num / 1000){
        if(num / 1000 == 1) r += "m";
        else r += IntToString(num/1000) + "m";
        num = num % 1000;
    }
    if(num / 100){
        if(num / 100 == 1) r += "c";
        else r += IntToString(num/100) + "c";
        num = num % 100;
    }
    if(num / 10){
        if(num / 10 == 1) r += "x";
        else r += IntToString(num/10) + "x";
        num = num % 10;
    }
    if(num / 1){
        if(num / 1 == 1) r += "i";
        else r += IntToString(num) + "i";
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    m["m"] = 1000; m["c"] = 100; m["x"] = 10; m["i"] = 1;
    rep(p, n){
        string s1, s2;
        cin >> s1 >> s2;
        cout << its(sti(s1)+sti(s2)) << endl;
    }
}