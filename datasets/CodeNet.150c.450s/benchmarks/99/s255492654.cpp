#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<cstdlib>
#include<map>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

map<char, int> alpha_to_num;
map<int, char> num_to_alpha;

int solve(string s){
    int ret = 0;
    REP(i, s.length()){
        if(isdigit(s[i])) continue;
        if(i == 0 || isalpha(s[i - 1])) ret += alpha_to_num[s[i]];
        else ret += (alpha_to_num[s[i]] * (s[i - 1] - '0'));
    }
    return ret;
}

void disp(int n){
    stringstream ss;
    for(int i = 1000; i > 0; i /= 10){
        int now = n / i;
        if(now == 0) continue;

        if(now == 1) ss <<num_to_alpha[i];
        else ss <<now <<num_to_alpha[i];
        n -= (now * i);
    }
    cout <<ss.str() <<endl;
}

int main(){
    alpha_to_num['m'] = 1000;
    alpha_to_num['c'] = 100;
    alpha_to_num['x'] = 10;
    alpha_to_num['i'] = 1;
    num_to_alpha[1000] = 'm';
    num_to_alpha[100] = 'c';
    num_to_alpha[10] = 'x';
    num_to_alpha[1] = 'i';
    int n; cin >>n;
    REP(z, n){
        string a, b; cin >>a >>b;
        disp(solve(a) + solve(b));
    }
    return 0;
}