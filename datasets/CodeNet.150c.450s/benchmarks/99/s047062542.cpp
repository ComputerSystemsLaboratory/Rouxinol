#include<iostream>
#include<map>
#include<cctype>
using namespace std;

int dec(string s){
    map<char,int> m;
    m['m'] = 1000;
    m['c'] = 100;
    m['x'] = 10;
    m['i'] = 1;
    int ret = 0;
    for(int i = 0; i < s.length(); i++){
        int bias = 1;
        if(isdigit(s[i]))   bias = (s[i]-'0'), i++;
        ret += bias * m[s[i]];
    }
    return ret;
}

string enc(int i){
    string ret = "";
    if(i/1000){
        if(i/1000 > 1)  ret.push_back('0'+i/1000);
        ret.push_back('m');
        i %= 1000;
    }
    if(i/100){
        if(i/100 > 1)  ret.push_back('0'+i/100);
        ret.push_back('c');
        i %= 100;
    }
    if(i/10){
        if(i/10 > 1)  ret.push_back('0'+i/10);
        ret.push_back('x');
        i %= 10;
    }
    if(i>0){
        if(i > 1)  ret.push_back('0'+i);
        ret.push_back('i');
    }
    return ret;
}

int main(){
    int n;
    cin >> n;

    string s, t;
    for(int i = 0; i < n; i++){
        cin >> s >> t;
        cout << enc(dec(s)+dec(t)) << endl;
    }

    return 0;
}
