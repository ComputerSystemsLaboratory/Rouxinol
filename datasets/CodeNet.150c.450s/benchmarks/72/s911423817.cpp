//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_A
#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
#include <vector>

using namespace std;

void change(string &input){
    for(int i=0; i<input.size(); i++){
        if(std::islower(input[i])) input[i] = std::toupper(input[i]);
        else{
        if(std::isupper(input[i])) input[i] = std::tolower(input[i]);
        }
    }
}

int main(){
    vector<string> v;
    string buf;
    while (cin >> buf) {
        change(buf);
        v.push_back(buf);
    }

    for(int i=0; i<v.size()-1; i++){
        cout << v[i] << " ";
    }
    cout << v.back() << endl;

    return 0;
}