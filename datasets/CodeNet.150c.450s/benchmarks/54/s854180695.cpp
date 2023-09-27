#include<string>
#include<cctype>
#include<iostream>
using namespace std;
string toUpper(string s){
    string t = s;
    for (int i = 0; i < s.size(); i++){
        t[i] = toupper(s[i]);
    }
    return t;
}
int main(){
    string W,T;
    cin >> W;
    int n = 0;
    while(1){
        cin >> T;
        if (T == "END_OF_TEXT") break;
        if (toUpper(T) == toUpper(W)) n++;
    }
    cout << n << endl;
}
