#include <iostream>
#include <stack>
#include <deque>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void){
    stack<int> s;
    deque<pair<int, int>> d;
    int sum = 0;
    char c;
    for(int i = 0; cin >> c; ++i){
        if(c == '\\') s.push(i);
        else if(c == '/' && !s.empty()){
            int j = s.top(); s.pop();
            sum += i - j;
            int a = i - j;
            while(!d.empty() && d.front().first > j){
                a += d.front().second; d.pop_front();
            }
            d.push_front(make_pair(j, a));
        }
    }
    
    cout << sum << endl;
    int len = d.size();
    cout << len;
    for(int i = len - 1; i >= 0; --i)
        cout << " " << d[i].second;
    cout << endl;
    return 0;
}
