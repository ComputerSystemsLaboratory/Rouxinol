#include <bits/stdc++.h>
using namespace std;
vector<string> state(string b,string a){
    vector<string> vs;
    string br,ar;
    br=b;
    reverse(br.begin(),br.end());
    ar=a;
    reverse(ar.begin(),ar.end());
    vs.push_back(b+a);
    vs.push_back(br+a);
    vs.push_back(b+ar);
    vs.push_back(br+ar);
    vs.push_back(a+b);
    vs.push_back(ar+b);
    vs.push_back(a+br);
    vs.push_back(ar+br);
    return vs;
}

void solve(string s){
    set<string> ss;
    vector<string> vs;
    string b,a;
    for(int i=1;i<s.size();i++){
        b=s.substr(0,i);
        a=s.substr(i,s.size());
        vs=state(b,a);
        for(string x:vs){
            ss.insert(x);
        }
    }
    cout<<ss.size()<<endl;
}


int main(void){
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        solve(s);
    }
}

