#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int N, M;
    while(cin >> N && N!=0) {
        map<char, char> conv;
        for(int i=0; i<N; ++i) {
            char pre, post;
            cin >> pre >> post;
            conv[pre] = post;
        }

        cin >> M;
        string ret;
        for(int i=0; i<M; ++i) {
            char ch; cin >> ch;
            if(conv.count(ch)) ret += conv[ch];
            else               ret += ch;
        }
        cout << ret << endl;
    }
}