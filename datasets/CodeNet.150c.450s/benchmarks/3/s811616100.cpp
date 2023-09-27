#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

string replace(string str, int a, int b){
    string repl;
    cin >> repl;
    for(int i = 0; i <= b - a; i++){
        str[a + i] = repl[i];
    }
    return str;
}

string reverse(string str, int a, int b){
    string rev = str;
    for(int i = a, j = 0; i <= b; i++, j++){
        str[i] = rev[b - j];
    }
    return str;
}

void print(string s, int a, int b){
    for(int i = a; i <= b; i++){
        cout << s[i];
    }
    cout << endl;
}

int main(){
    string str;
    while(cin >> str){
        int q;
        cin >> q;
        rep(i,q){
            string order;
            int a, b;
            cin >> order >> a >> b;
            if(order == "replace") str = replace(str, a, b);
            else if(order == "reverse") str = reverse(str, a, b);
            else if(order == "print") print(str, a, b);
        }
    }
}