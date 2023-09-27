#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
    vector<string> vec;
    string input, ans1;
    int maxLen = 0;
    while(cin >> input) {
        vec.push_back(input);
        if(input.length() > maxLen) {
            maxLen = (int)input.length();
            ans1 = input;
        }
    }
    map<int, string> hm;
    vector<string>::iterator ite;
    int max = 0;
    for(ite = vec.begin(); ite != vec.end(); ite++) {
        string now = *ite;
        int cnt = (int)count(vec.begin(), vec.end(), now);
        if(cnt > max) max = cnt;
        hm.insert(make_pair(cnt, now));
    }
    map<int, string>::iterator ite2;
    for(ite2 = hm.begin(); ite2 != hm.end(); ite2++) {
        if(ite2->first == max) {
            cout << ite2->second << " "; break;
        }
    }
    cout << ans1 << endl;
    return(0);
}