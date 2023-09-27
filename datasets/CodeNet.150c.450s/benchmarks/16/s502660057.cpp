#include<iostream>
#include<cstdlib>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main(){
    stack<int> YAMA;
    stack<pair<int, long> > MIZU;
    string s;
    long water=0;
    cin >> s;
    
    for (int i = 0; i<s.size(); i++) {
        if (s[i] == '\\') {
            YAMA.push(i);
        }else if (s[i] == '/' && YAMA.size() != 0){
            long W_sum = 0;
                while (MIZU.size() != 0 && YAMA.top() < MIZU.top().first) {
                    W_sum += MIZU.top().second; MIZU.pop();
                }
            MIZU.push(make_pair(YAMA.top(),W_sum + ( i - YAMA.top())));
            water += i - YAMA.top(); YAMA.pop();
        }
    }
    
    vector<long> ANS;
    int mizu = MIZU.size();
    for (int i = 0; i < mizu; i++) {
        ANS.push_back(MIZU.top().second);
        MIZU.pop();
    }
    cout << water << endl;
    cout << mizu;
    for (int i = mizu-1; i>=0; i--) {
        cout << " " << ANS[i];
    }
    cout << endl;
    return 0;
}