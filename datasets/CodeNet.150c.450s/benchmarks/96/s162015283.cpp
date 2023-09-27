#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    
    vector<vector<char>> v;
    vector<char> tmp;
    tmp.push_back('.');
    tmp.push_back(',');
    tmp.push_back('!');
    tmp.push_back('?');
    tmp.push_back(' ');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('a');
    tmp.push_back('b');
    tmp.push_back('c');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('d');
    tmp.push_back('e');
    tmp.push_back('f');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('g');
    tmp.push_back('h');
    tmp.push_back('i');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('j');
    tmp.push_back('k');
    tmp.push_back('l');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('m');
    tmp.push_back('n');
    tmp.push_back('o');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('p');
    tmp.push_back('q');
    tmp.push_back('r');
    tmp.push_back('s');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('t');
    tmp.push_back('u');
    tmp.push_back('v');
    v.push_back(tmp);
    tmp.clear();
    tmp.push_back('w');
    tmp.push_back('x');
    tmp.push_back('y');
    tmp.push_back('z');
    v.push_back(tmp);
    tmp.clear();
    
    int t;
    for(auto itr=s.begin()+1;itr!=s.end();itr++){
        if(*itr=='0'){
            if(*(itr-1)!='0'){
                t=*(itr-1)-'0';
                int count=0;
                for(auto it=itr-1;*it!='0';it--){
                    count++;
                    if(it==s.begin()||*(it-1)=='0'){
                        break;
                    }
                }
                cout<<v[t-1][(count-1)%v[t-1].size()];
                
            }
        }
    }
    cout<<endl;
    
}


int main(void){
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        solve(s);
    }
    
}