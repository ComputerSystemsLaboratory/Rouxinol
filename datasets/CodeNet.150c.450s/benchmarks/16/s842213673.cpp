#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int i,j,a,sum=0;
    stack<int> S1;
    stack<pair<int, int> > S2;
    string ch;
    getline(cin, ch);
    for(i=0;i<ch.size();i++){
        if(ch[i]=='\\') S1.push(i);
        else if(ch[i]=='/' && S1.size()>0){
            j = S1.top();S1.pop();
            sum += i - j;
            a = i - j;
            while(S2.size()>0 && S2.top().first > j){
                a += S2.top().second; S2.pop();
            }
            S2.push(make_pair(j, a));
        }
    }

    vector<int> ans;
    while(S2.size()>0) {ans.push_back(S2.top().second); S2.pop();}
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for(i=0;i<ans.size();i++){
        cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}