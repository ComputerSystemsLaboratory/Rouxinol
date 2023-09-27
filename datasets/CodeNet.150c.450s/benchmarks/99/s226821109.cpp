#include <iostream>
#include <map>
#include <string>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

int f(string const & s){
    int p = 0, res = 0;
    while(p < (int)s.size()){
        int n = 0;
        while(isdigit(s[p])){
            n *= 10;
            n += s[p]-'0';
            p++;
        }
        n += n==0;
        int m[256];
        m[(int)'m'] = 1000;
        m[(int)'c'] = 100;
        m[(int)'x'] = 10;
        m[(int)'i'] = 1;
        res += m[(int)s[p]] * n;
        p++;
    }
    return res;
}

string g(int n){
    string res;
    char c[] = "ixcm";
    rep(i,4){
        int k = n%10;
        n /= 10;
        if(k == 0) continue;
        res += c[i];
        if(k!=1) res += k+'0';
    }
    rep(i,res.size()/2) swap(res[i], res[res.size()-1-i]);
    return res;
}

int main(){
    int n;
    cin >> n;
    rep(i,n){
        string s, t;
        cin >> s >> t;
        cout << g(f(s)+f(t)) << endl;
    }
}