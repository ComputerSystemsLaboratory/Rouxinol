#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(const string &str, char sep) {
    vector<string> v;
    stringstream ss(str);
    string buffer;
    while( getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string input;
    getline(cin, input);
    vector<string> s = split(input, ' ');

    int a = atoi(s[0].c_str());
    int b = atoi(s[1].c_str());

    if ( a == b ){
        cout << "a == b\n";
    } else if (a > b) {
        cout << "a > b\n";
    } else {
        cout << "a < b\n";
    }

    return 0;
}