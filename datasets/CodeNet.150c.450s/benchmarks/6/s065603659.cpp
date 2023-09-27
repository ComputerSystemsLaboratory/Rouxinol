#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>
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

    string s;
    getline(cin, s);
    vector<string> splited = split(s, ' ');
    int a = atoi(splited[0].c_str());
    int b = atoi(splited[1].c_str());
    int c = atoi(splited[2].c_str());

    string result = a < b && b < c ? "Yes" : "No";
    cout << result << endl;

    return 0;
}