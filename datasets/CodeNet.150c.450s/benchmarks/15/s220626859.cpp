#include <iostream>
#include <stack>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

int _stoi(string s) {
    return atoi(s.c_str());
}

int popValue(stack<int> *S) {
    int retVal = S->top();
    S->pop();
    return retVal;
}

int main(int argc, const char * argv[]) {
    vector<int> S;
    vector<int> T;
    string s;
    int n = -1;
    int q = -1;
    while(cin >> s){
        if (n == -1) {
            n = _stoi(s);
        } else if( n > 0 ) {
            n--;
            S.push_back(_stoi(s));
        } else if ( q == -1) {
            q = _stoi(s);
        } else if( q > 0 ){
            q--;
            T.push_back(_stoi(s));
        }
    }
    
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());
    int j = 0;
    int total = 0;
    for (int i = 0; i < T.size(); i++) {
        int t = T[i];
        while (j < S.size() && S[j] <= t) {
            if (S[j] == t) {
                total++;
                break;
            }
            j++;
        }
    }
    
    cout << total << endl;
    
    return 0;
}