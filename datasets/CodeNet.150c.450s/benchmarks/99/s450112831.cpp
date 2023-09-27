#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

map<char,int> mp;

int decode(){
    string s;
    cin >> s;
    int n = s.size();
    int a = 1;
    int ret = 0;
    for(int i = 0; i < n; i++){
        if(isdigit(s[i])){
            a = s[i] - '0';
        }else{
            ret += a*mp[s[i]];
            a = 1;
        }
    }
    //cout << "!" << ret << endl;
    return ret;
}
int main(){
    mp['m'] = 1000;
    mp['c'] = 100;
    mp['x'] = 10;
    mp['i'] = 1;
    int t;
    cin >> t;
    while(t--){
        int sum = decode() + decode();
        //cout << sum << endl;
        if(sum/1000){
            if(sum/1000 > 1)cout << sum/1000;
            cout << "m";
            sum %= 1000;
        }
        if(sum/100){
            if(sum/100 > 1)cout << sum/100;
            cout << "c";
            sum %= 100;
        }
        if(sum/10){
            if(sum/10 > 1)cout << sum/10;
            cout << "x";
            sum %= 10;
        }
        if(sum){
            if(sum > 1)cout << sum;
            cout << "i";
        }
        cout << endl;
    }
}

