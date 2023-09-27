#include <iostream>
#include <stack>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int _stoi(string s) {
    return atoi(s.c_str());
}

int popValue(stack<int> *S) {
    int retVal = S->top();
    S->pop();
    return retVal;
}

struct startAndAmount {
    int start;
    int amount;
};

startAndAmount popValue(stack<startAndAmount> *S) {
    startAndAmount retVal = S->top();
    S->pop();
    return retVal;
}

int main(int argc, const char * argv[]) {
    stack<int> S;
    stack<startAndAmount> S2;
    string s;
    int i = 0;
    int total = 0;
    cin >> s;
    
    while(i < s.length()){
        if (s[i] == '\\') {
            S.push(i);
        } else if (s[i] == '/') {
            if (S.empty() == false) {
                int plus = 0;
                int start = popValue(&S);
                plus = i - start;
                total += plus;
                
                while (S2.empty() == false && S2.top().start > start) {
                    plus += S2.top().amount;
                    S2.pop();
                }
                startAndAmount saa;
                saa.start = start;
                saa.amount = plus;
                S2.push(saa);
            }
        }
        i++;
    }
    
    vector<int> ans;
    while (S2.empty() == false) {
        ans.push_back(popValue(&S2).amount);
    }
    reverse(ans.begin(), ans.end());
    
    cout << total << endl;
    
    cout << ans.size();
    
    for (int i = 0; i < ans.size(); i++) {
        cout << " " << ans[i];
    }
    
    cout << endl;
    
    return 0;
}