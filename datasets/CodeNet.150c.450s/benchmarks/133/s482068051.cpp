#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::vector;
using std::string;

int main(){
    int D,out=0;
    cin >> D;
    int c[26],s[D][26],t[D],l[26]={};
    for(int i=0;i<26;i++) cin >> c[i];
    for(int i=0;i<D;i++){
        for(int j=0;j<26;j++) cin >> s[i][j];
    }
    for(int i=0;i<D;i++) cin >> t[i];
    for(int i=0;i<D;i++){
        l[t[i]-1] = i+1;
        out += s[i][t[i]-1];
        for(int j=0;j<26;j++){
            out -= c[j] * (i + 1 - l[j]);
        }
        cout << out << endl;
    }

}