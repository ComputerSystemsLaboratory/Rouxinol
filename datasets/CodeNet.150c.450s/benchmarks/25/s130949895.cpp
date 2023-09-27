#include <iostream>
using namespace std;
int main() {
    string in;
    int alp[26]={},i;
    while (cin>>in) {
        for (i=0;i<in.size();i++) {
            if ('a' <= in[i] && in[i] <= 'z') alp[in[i]-'a']++;
            if ('A' <= in[i] && in[i] <= 'Z') alp[in[i]-'A']++;
        }
    }
    for (i=0;i<26;i++) {
        cout << (char)('a'+i) << " : " << alp[i] << endl;
    }
    return 0;
}