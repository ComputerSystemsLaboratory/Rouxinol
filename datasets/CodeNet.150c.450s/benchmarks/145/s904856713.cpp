#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;

int main(){
    string s;
    string longest;
    map<string,int> m;
    while(cin >> s){
        m[s]++;
        if(longest.size() < s.size()) longest = s;
    }
    string freq;
    for(auto & e : m){
        if(m[freq] < e.second) freq = e.first;
    }
    cout << freq << " " << longest << endl;
}