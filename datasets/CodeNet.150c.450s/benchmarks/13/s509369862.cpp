//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_D
#include <iostream>
#include <string>
#include <cstdio>
#include <deque>
using namespace std;

void change(const string &input, const unsigned int &dif, string &output){
    if(dif >= input.size()){
        // cerr << "invalid input" << endl;
    }
    int size = input.size();
    string mae = input.substr(dif, size-dif);
    string ato = input.substr(0, dif);
    output = mae+ato;
}

void match(string &s, const string &p){
    for(int i=0; i<s.size(); i++){
        string output;
        change(s, i, output);
        int loc = output.find(p, 0);
        if(loc != string::npos){
            cout << "Yes"<< endl;
            return;
        }
    }
    cout << "No" << endl;
    return;
}



int main(){
  string s,p;
  cin >> s >> p;
  match(s,p);
  return 0;
}