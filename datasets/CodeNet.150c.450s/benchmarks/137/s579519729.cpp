#include<iostream>
using namespace std;
const int MOD = 1046527;
string S[MOD];
int charToInt(char c){
    if(c == 'A') return 1;
    if(c == 'C') return 2;
    if(c == 'G') return 3;
    if(c == 'T') return 4;
    return 0;
}
int getKey(string s){
    int sum = 0, p = 1;
    for(int i=0;i<s.size();++i,p*=5) sum+=p*charToInt(s[i]);
    return sum;
}
int h1(int key){return key % MOD;}
int h2(int key){return 1 + (key % (MOD - 1));}
int find(string s){
    int key = getKey(s);
    for(int i=0;;++i){
        int h = (h1(key) + i * h2(key)) % MOD;
        if(S[h] == s) return 1;
        if(S[h].size() == 0) return 0;
    }
}
void insert(string s){
    int key = getKey(s);
    for(int i=0;;++i){
        int h = (h1(key) + i * h2(key)) % MOD;
        if(S[h] == s) return;
        if(S[h].size() == 0){
            S[h] = s;
            return;
        }
    }
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    for(int i=0;i<N;++i){
        string s, t;
        cin>>s>>t;
        if(s == "insert") insert(t);
        if(s == "find") cout<<(find(t)?"yes":"no")<<endl;
    }
}