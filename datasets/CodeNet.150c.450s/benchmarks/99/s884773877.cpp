#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)

typedef long long ll;

int let(char c){
    switch (c){
        case 'm':
            return 1000;
        case 'c':
            return 100;
        case 'x':
            return 10;
        case 'i':
            return 1;
    }
    return -1;
}

int conv(string s){
    int a=0;
    int i=0;
    while(i<s.length()){
        if (s[i]>='2'&&s[i]<='9'){
            int k=s[i]-'0';
            i++;
            a+=k*let(s[i]);            
        }else{
            a+=let(s[i]);
        }
        i++;
    }
    return a;
}

string unconv(int a){
    string s;
    int k=a/1000;
    if (k>0){
        if (k>1)
            s.push_back('0'+k);
        s.push_back('m');
    }
    a %= 1000;
    k = a/100;
    if (k>0){
        if(k>1)
            s.push_back('0'+k);
        s.push_back('c');
    }
    a %= 100;
    k = a/10;
    if (k>0){
        if(k>1)
            s.push_back('0'+k);
        s.push_back('x');
    }
    k = a%10;
    if (k>0){
        if(k>1)
            s.push_back('0'+k);
        s.push_back('i');
    }
    return s;
}


int main(void) {
    int n;
    cin >> n;
    while(n--){
        string s1,s2;
        cin >> s1 >> s2;
        int a = conv(s1)+conv(s2);
        string ans = unconv(a);
        cout << ans << endl;

    }
    
    return 0;
}